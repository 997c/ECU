#ifndef ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBT_H
#define ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RBT - Rear Brake Torque with Regen (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} RBT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} RBT_State;

void RBT_init(const RBT_Config* cfg);
void RBT_update(float dt_ms, const VehicleState* vs, RBT_State* state, ActuatorCommands* out);
void RBT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBT_H */
