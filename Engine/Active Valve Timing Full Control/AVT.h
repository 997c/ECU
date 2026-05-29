#ifndef ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVT_H
#define ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AVT - Active Valve Timing Full Control (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AVT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AVT_State;

void AVT_init(const AVT_Config* cfg);
void AVT_update(float dt_ms, const VehicleState* vs, AVT_State* state, ActuatorCommands* out);
void AVT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVT_H */
