#ifndef ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABS_H
#define ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ABS - Anti-lock Braking System (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ABS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ABS_State;

void ABS_init(const ABS_Config* cfg);
void ABS_update(float dt_ms, const VehicleState* vs, ABS_State* state, ActuatorCommands* out);
void ABS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABS_H */
