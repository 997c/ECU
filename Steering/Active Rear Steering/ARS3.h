#ifndef ECU_STEERING_ACTIVE_REAR_STEERING_ARS3_H
#define ECU_STEERING_ACTIVE_REAR_STEERING_ARS3_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ARS3 - Active Rear Steering (Steering) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ARS3_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ARS3_State;

void ARS3_init(const ARS3_Config* cfg);
void ARS3_update(float dt_ms, const VehicleState* vs, ARS3_State* state, ActuatorCommands* out);
void ARS3_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_REAR_STEERING_ARS3_H */
