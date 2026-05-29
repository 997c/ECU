#ifndef ECU_AERO_PLATFORM_PITCH_CONTROL_PTC_H
#define ECU_AERO_PLATFORM_PITCH_CONTROL_PTC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PTC - Pitch Control (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} PTC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} PTC_State;

void PTC_init(const PTC_Config* cfg);
void PTC_update(float dt_ms, const VehicleState* vs, PTC_State* state, ActuatorCommands* out);
void PTC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PITCH_CONTROL_PTC_H */
