#ifndef ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUS_H
#define ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AUS - Active Underbody Sealing (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AUS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AUS_State;

void AUS_init(const AUS_Config* cfg);
void AUS_update(float dt_ms, const VehicleState* vs, AUS_State* state, ActuatorCommands* out);
void AUS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUS_H */
