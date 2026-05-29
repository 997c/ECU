#ifndef ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHS_H
#define ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AHS - Active Hydraulic Suspension (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AHS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AHS_State;

void AHS_init(const AHS_Config* cfg);
void AHS_update(float dt_ms, const VehicleState* vs, AHS_State* state, ActuatorCommands* out);
void AHS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHS_H */
