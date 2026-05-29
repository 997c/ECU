#ifndef ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVR_H
#define ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AVR - Active Variable Steering Ratio (Steering) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AVR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AVR_State;

void AVR_init(const AVR_Config* cfg);
void AVR_update(float dt_ms, const VehicleState* vs, AVR_State* state, ActuatorCommands* out);
void AVR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVR_H */
