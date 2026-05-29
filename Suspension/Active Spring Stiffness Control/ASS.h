#ifndef ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASS_H
#define ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ASS - Active Spring Stiffness Control (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ASS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ASS_State;

void ASS_init(const ASS_Config* cfg);
void ASS_update(float dt_ms, const VehicleState* vs, ASS_State* state, ActuatorCommands* out);
void ASS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASS_H */
