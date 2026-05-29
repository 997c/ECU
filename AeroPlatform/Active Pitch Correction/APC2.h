#ifndef ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2_H
#define ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* APC2 - Active Pitch Correction (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} APC2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} APC2_State;

void APC2_init(const APC2_Config* cfg);
void APC2_update(float dt_ms, const VehicleState* vs, APC2_State* state, ActuatorCommands* out);
void APC2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2_H */
