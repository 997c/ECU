#ifndef ECU_STEERING_ALL_WHEEL_STEERING_AWS_H
#define ECU_STEERING_ALL_WHEEL_STEERING_AWS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AWS - All-Wheel Steering (Steering) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AWS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AWS_State;

void AWS_init(const AWS_Config* cfg);
void AWS_update(float dt_ms, const VehicleState* vs, AWS_State* state, ActuatorCommands* out);
void AWS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ALL_WHEEL_STEERING_AWS_H */
