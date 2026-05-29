#ifndef ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIG_H
#define ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIG_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VIG - Variable Intake Geometry (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VIG_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VIG_State;

void VIG_init(const VIG_Config* cfg);
void VIG_update(float dt_ms, const VehicleState* vs, VIG_State* state, ActuatorCommands* out);
void VIG_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIG_H */
