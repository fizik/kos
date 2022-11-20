#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdint.h>
#include <coresrv/nk/transport-kos.h>
#include <coresrv/sl/sl_api.h>
#include <mosquitto/Changestate.edl.h>
#include <unistd.h>
#include <gpio/gpio.h>
#include <stdbool.h>
#include <bsp/bsp.h>
#include <mosquitto/queue.h>

#define HIGH 1
#define LOW 0

#define GPIO_PIN_NUM_IN1 12
#define GPIO_PIN_NUM_IN2 13
#define GPIO_PIN_NUM_IN3 20
#define GPIO_PIN_NUM_IN4 21
#define GPIO_PIN_NUM_ENA 6
#define GPIO_PIN_NUM_ENB 26

void forward(GpioHandle* handle) {
    fprintf(stderr, "forward\n");

    GpioOut(*handle, GPIO_PIN_NUM_IN1, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_IN2, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN3, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN4, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_ENA, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_ENB, HIGH);
}

void backward(GpioHandle* handle) {
    fprintf(stderr, "backward\n");

    GpioOut(*handle, GPIO_PIN_NUM_IN1, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN2, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_IN3, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_IN4, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_ENA, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_ENB, HIGH);
}

void left(GpioHandle* handle) {
    fprintf(stderr, "left\n");

    GpioOut(*handle, GPIO_PIN_NUM_IN1, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN2, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN3, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN4, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_ENA, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_ENB, HIGH);
}

void right(GpioHandle* handle) {
    fprintf(stderr, "right\n");

    GpioOut(*handle, GPIO_PIN_NUM_IN1, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_IN2, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN3, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN4, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_ENA, HIGH);
    GpioOut(*handle, GPIO_PIN_NUM_ENB, HIGH);
}

void stop(GpioHandle* handle) {
    fprintf(stderr, "stop\n");

    GpioOut(*handle, GPIO_PIN_NUM_IN1, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN2, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN3, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_IN4, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_ENA, LOW);
    GpioOut(*handle, GPIO_PIN_NUM_ENB, LOW);
}



static nk_err_t Setcommand_impl(struct mosquitto_Setcommand *self,
                          const struct mosquitto_Setcommand_Setcommand_req *req,
                          const struct nk_arena *req_arena,
                          struct mosquitto_Setcommand_Setcommand_res *res,
                          struct nk_arena *res_arena)
{

    fprintf(stderr,"[ChangeState] Recieved number: %d\n", req->value);

    BspError rc = BspInit(NULL);
    if (rc != BSP_EOK) {
        fprintf(stderr, "Failed to initialize BSP\n");
        return EXIT_FAILURE;
    }
    rc = BspSetConfig("gpio0", "raspberry_pi4b.default");
    if (rc != BSP_EOK){
        fprintf(stderr, "Failed to set mux configuration for gpio0 module\n");
        return EXIT_FAILURE;
    }

    if (GpioInit())
    {
        fprintf(stderr, "GpioInit failed\n");
        return EXIT_FAILURE;
    }

    /* initialize and setup gpio0 port */
    GpioHandle gpiohandle = NULL;
    if (GpioOpenPort("gpio0", &gpiohandle) || gpiohandle == GPIO_INVALID_HANDLE)
    {
        fprintf(stderr, "GpioOpenPort failed\n");
        return EXIT_FAILURE;
    }

    GpioSetMode(gpiohandle, GPIO_PIN_NUM_IN1, GPIO_DIR_OUT);
    GpioSetMode(gpiohandle, GPIO_PIN_NUM_IN2, GPIO_DIR_OUT);
    GpioSetMode(gpiohandle, GPIO_PIN_NUM_IN3, GPIO_DIR_OUT);
    GpioSetMode(gpiohandle, GPIO_PIN_NUM_IN4, GPIO_DIR_OUT);
    GpioSetMode(gpiohandle, GPIO_PIN_NUM_ENA, GPIO_DIR_OUT);
    GpioSetMode(gpiohandle, GPIO_PIN_NUM_ENB, GPIO_DIR_OUT);

    if (req->value == ec_stop) {stop(&gpiohandle);}
    else if (req->value == ec_forward) {forward(&gpiohandle);}
    else if (req->value == ec_back) {backward(&gpiohandle);}
    else if (req->value == ec_left) {left(&gpiohandle);}
    else if (req->value == ec_right) {right(&gpiohandle);}
    return NK_EOK;
}

static struct mosquitto_Setcommand *CreateSetcommandImpl()
{
    static const struct mosquitto_Setcommand_ops ops = {
        .Setcommand = Setcommand_impl
    };

    static struct mosquitto_Setcommand impl = {
        .ops = &ops
    };

    return &impl;
}

int main(void)
{
    
    NkKosTransport transport;
    ServiceId iid;

    Handle handle = ServiceLocatorRegister("changestate_connection", NULL, 0, &iid);

    NkKosTransport_Init(&transport, handle, NK_NULL, 0);

    mosquitto_Changestate_entity_req req;
    char req_buffer[mosquitto_Changestate_entity_req_arena_size];
    struct nk_arena req_arena = NK_ARENA_INITIALIZER(req_buffer,
                                        req_buffer + sizeof(req_buffer));

    mosquitto_Changestate_entity_res res;
    char res_buffer[mosquitto_Changestate_entity_res_arena_size];
    struct nk_arena res_arena = NK_ARENA_INITIALIZER(res_buffer,
                                        res_buffer + sizeof(res_buffer));

    mosquitto_Setcommand_component component;

    mosquitto_Setcommand_component_init(&component, CreateSetcommandImpl());

    mosquitto_Changestate_entity entity;
    mosquitto_Changestate_entity_init(&entity, &component);

    fprintf(stderr, "Hello I'm changestate application. I'm ready\n");

    /* Dispatch loop implementation. */
    do
    {
        nk_req_reset(&req);
        nk_arena_reset(&req_arena);
        nk_arena_reset(&res_arena);

        if (nk_transport_recv(&transport.base,
                              &req.base_,
                              &req_arena) != NK_EOK) {
            fprintf(stderr, "nk_transport_recv error\n");
        } else {
            mosquitto_Changestate_entity_dispatch(&entity, &req.base_, &req_arena,
                                        &res.base_, &res_arena);
        }
        if (nk_transport_reply(&transport.base,
                               &res.base_,
                               &res_arena) != NK_EOK) {
            fprintf(stderr, "nk_transport_reply error\n");
        }
    }
    while (true);

    return EXIT_SUCCESS;
}
