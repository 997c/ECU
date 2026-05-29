#ifndef ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APS_H
#define ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* APS - Active Pneumatic Suspension (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} APS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} APS_State;

void APS_init(const APS_Config* cfg);
void APS_update(float dt_ms, const VehicleState* vs, APS_State* state, ActuatorCommands* out);
void APS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APS_H */
