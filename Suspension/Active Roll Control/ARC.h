#ifndef ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARC_H
#define ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ARC - Active Roll Control (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ARC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ARC_State;

void ARC_init(const ARC_Config* cfg);
void ARC_update(float dt_ms, const VehicleState* vs, ARC_State* state, ActuatorCommands* out);
void ARC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARC_H */
