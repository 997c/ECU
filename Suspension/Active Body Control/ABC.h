#ifndef ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABC_H
#define ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ABC - Active Body Control (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ABC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ABC_State;

void ABC_init(const ABC_Config* cfg);
void ABC_update(float dt_ms, const VehicleState* vs, ABC_State* state, ActuatorCommands* out);
void ABC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABC_H */
