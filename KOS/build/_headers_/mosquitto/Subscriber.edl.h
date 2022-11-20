#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef __mosquitto__Subscriber__COMPONENT_ENDPOINTS__
#define __mosquitto__Subscriber__COMPONENT_ENDPOINTS__
enum {
    mosquitto_Subscriber_iidMax,
};
enum {
    mosquitto_Subscriber_iidOffset = 0,
};
enum {
    mosquitto_Subscriber_securityIidMax,
};
enum {
    mosquitto_Subscriber_component_req_arena_size =
    0,
    mosquitto_Subscriber_component_res_arena_size =
    0,
    mosquitto_Subscriber_component_arena_size = 0,
    mosquitto_Subscriber_component_req_handles =
    0,
    mosquitto_Subscriber_component_res_handles =
    0,
    mosquitto_Subscriber_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Subscriber_iidMax mosquitto_Subscriber_iidMax
#define Subscriber_iidOffset mosquitto_Subscriber_iidOffset
#define Subscriber_securityIidMax mosquitto_Subscriber_securityIidMax
#define Subscriber_component_req_arena_size mosquitto_Subscriber_component_req_arena_size
#define Subscriber_component_res_arena_size mosquitto_Subscriber_component_res_arena_size
#define Subscriber_component_arena_size mosquitto_Subscriber_component_arena_size
#define Subscriber_component_req_handles mosquitto_Subscriber_component_req_handles
#define Subscriber_component_res_handles mosquitto_Subscriber_component_res_handles
#define Subscriber_component_err_handles mosquitto_Subscriber_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Subscriber__COMPONENT_ENDPOINTS__ */

#ifndef __mosquitto__Subscriber__TASK_ENDPOINTS__
#define __mosquitto__Subscriber__TASK_ENDPOINTS__
enum {
    mosquitto_Subscriber_entity_req_arena_size =
    mosquitto_Subscriber_component_req_arena_size,
    mosquitto_Subscriber_entity_res_arena_size =
    mosquitto_Subscriber_component_res_arena_size,
    mosquitto_Subscriber_entity_arena_size =
    mosquitto_Subscriber_component_arena_size,
    mosquitto_Subscriber_entity_req_handles =
    mosquitto_Subscriber_component_req_handles,
    mosquitto_Subscriber_entity_res_handles =
    mosquitto_Subscriber_component_res_handles,
    mosquitto_Subscriber_entity_err_handles =
    mosquitto_Subscriber_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Subscriber_entity_req_arena_size mosquitto_Subscriber_entity_req_arena_size
#define Subscriber_entity_res_arena_size mosquitto_Subscriber_entity_res_arena_size
#define Subscriber_entity_arena_size mosquitto_Subscriber_entity_arena_size
#define Subscriber_entity_req_handles mosquitto_Subscriber_entity_req_handles
#define Subscriber_entity_res_handles mosquitto_Subscriber_entity_res_handles
#define Subscriber_entity_err_handles mosquitto_Subscriber_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Subscriber__TASK_ENDPOINTS__ */

#pragma GCC diagnostic pop

