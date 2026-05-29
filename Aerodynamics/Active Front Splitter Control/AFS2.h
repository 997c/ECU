#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AFS2 - Active Front Splitter Control (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AFS2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AFS2_State;

void AFS2_init(const AFS2_Config* cfg);
void AFS2_update(float dt_ms, const VehicleState* vs, AFS2_State* state, ActuatorCommands* out);
void AFS2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2_H */
