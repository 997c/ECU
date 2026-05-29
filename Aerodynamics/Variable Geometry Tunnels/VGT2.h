#ifndef ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2_H
#define ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VGT2 - Variable Geometry Tunnels (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VGT2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VGT2_State;

void VGT2_init(const VGT2_Config* cfg);
void VGT2_update(float dt_ms, const VehicleState* vs, VGT2_State* state, ActuatorCommands* out);
void VGT2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2_H */
