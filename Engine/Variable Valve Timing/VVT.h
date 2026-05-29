#ifndef ECU_ENGINE_VARIABLE_VALVE_TIMING_VVT_H
#define ECU_ENGINE_VARIABLE_VALVE_TIMING_VVT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VVT - Variable Valve Timing (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VVT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VVT_State;

void VVT_init(const VVT_Config* cfg);
void VVT_update(float dt_ms, const VehicleState* vs, VVT_State* state, ActuatorCommands* out);
void VVT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_TIMING_VVT_H */
