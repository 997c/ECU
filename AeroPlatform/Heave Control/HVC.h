#ifndef ECU_AERO_PLATFORM_HEAVE_CONTROL_HVC_H
#define ECU_AERO_PLATFORM_HEAVE_CONTROL_HVC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* HVC - Heave Control (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} HVC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} HVC_State;

void HVC_init(const HVC_Config* cfg);
void HVC_update(float dt_ms, const VehicleState* vs, HVC_State* state, ActuatorCommands* out);
void HVC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_HEAVE_CONTROL_HVC_H */
