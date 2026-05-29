#ifndef ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARS_H
#define ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ARS - Active Rear Spoiler (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ARS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ARS_State;

void ARS_init(const ARS_Config* cfg);
void ARS_update(float dt_ms, const VehicleState* vs, ARS_State* state, ActuatorCommands* out);
void ARS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARS_H */
