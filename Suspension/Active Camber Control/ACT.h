#ifndef ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACT_H
#define ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ACT - Active Camber Control (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ACT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ACT_State;

void ACT_init(const ACT_Config* cfg);
void ACT_update(float dt_ms, const VehicleState* vs, ACT_State* state, ActuatorCommands* out);
void ACT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACT_H */
