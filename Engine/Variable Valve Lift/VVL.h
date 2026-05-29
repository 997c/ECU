#ifndef ECU_ENGINE_VARIABLE_VALVE_LIFT_VVL_H
#define ECU_ENGINE_VARIABLE_VALVE_LIFT_VVL_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VVL - Variable Valve Lift (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VVL_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VVL_State;

void VVL_init(const VVL_Config* cfg);
void VVL_update(float dt_ms, const VehicleState* vs, VVL_State* state, ActuatorCommands* out);
void VVL_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_LIFT_VVL_H */
