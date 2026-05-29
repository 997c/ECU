#ifndef ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3_H
#define ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ABS3 - Active Bounce Suppression (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ABS3_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ABS3_State;

void ABS3_init(const ABS3_Config* cfg);
void ABS3_update(float dt_ms, const VehicleState* vs, ABS3_State* state, ActuatorCommands* out);
void ABS3_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3_H */
