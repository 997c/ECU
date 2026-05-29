#ifndef ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKS_H
#define ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AKS - Active Kinetic Suspension (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AKS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AKS_State;

void AKS_init(const AKS_Config* cfg);
void AKS_update(float dt_ms, const VehicleState* vs, AKS_State* state, ActuatorCommands* out);
void AKS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKS_H */
