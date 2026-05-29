#ifndef ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTG_H
#define ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTG_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VTG - Variable Turbine Geometry (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VTG_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VTG_State;

void VTG_init(const VTG_Config* cfg);
void VTG_update(float dt_ms, const VehicleState* vs, VTG_State* state, ActuatorCommands* out);
void VTG_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTG_H */
