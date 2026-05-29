#ifndef ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIM_H
#define ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AIM - Active Intake Manifold (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AIM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AIM_State;

void AIM_init(const AIM_Config* cfg);
void AIM_update(float dt_ms, const VehicleState* vs, AIM_State* state, ActuatorCommands* out);
void AIM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIM_H */
