#include <cstring>
#include <exception>
#include <iostream>
#include <memory>

#include <kos_net.h>

#include "general.h"
#include "subscriber.h"
#include <unistd.h>
#include <gpio/gpio.h>
#include <stdbool.h>
#include <bsp/bsp.h>
#include <mosquitto/queue.h>

namespace consts {
constexpr const char *DefaultMqttAddress = "10.0.2.2";
constexpr int DefaultMqttUnencryptedPort = 1883;
constexpr int PublicationIntervalInSec = 5;
} // namespace consts

static std::string GetBrokerAddress()
{
    const char *brokerAddress = getenv("MQTT_BROKER_ADDRESS");
    if (!brokerAddress)
    {
        std::cerr << app::AppTag
                  << "Failed to get MQTT broker address. Using default MQTT "
                     "broker address ("
                  << consts::DefaultMqttAddress << ")" << std::endl;
        return consts::DefaultMqttAddress;
    }
    return brokerAddress;
}

static int GetBrokerPort()
{
    const char *brokerPortEnvVariable = getenv("MQTT_BROKER_PORT");
    if (!brokerPortEnvVariable)
    {
        std::cerr << app::AppTag
                  << "Failed to get MQTT broker port. Using default MQTT "
                     "broker port ("
                  << consts::DefaultMqttUnencryptedPort << ")" << std::endl;
        return consts::DefaultMqttUnencryptedPort;
    }

    try
    {
        return std::stoi(brokerPortEnvVariable);
    }
    catch (const std::invalid_argument &ex)
    {
        std::cerr << app::AppTag
                  << "Failed to get MQTT broker port: " << ex.what()
                  << "Using default port ("
                  << consts::DefaultMqttUnencryptedPort << ")" << std::endl;
        return consts::DefaultMqttUnencryptedPort;
    }
}

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


int main(void)
{

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

    left(&gpiohandle);

    struct mosquitto_message message;

    if (!wait_for_network())
    {
        std::cerr << app::AppTag << "Error: Wait for network failed!"
                  << std::endl;
        return EXIT_FAILURE;
    }

    mosqpp::lib_init();

    auto sub = std::make_unique<Subscriber>(
        "subscriber", GetBrokerAddress().c_str(), GetBrokerPort());
    
    sub->on_message(&message);
    if (sub)
    {
        sub->loop_forever();
    }

    mosqpp::lib_cleanup();
    return EXIT_SUCCESS;
}