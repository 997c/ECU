#ifndef ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADG_H
#define ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADG_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ADG - Active Diffuser Geometry (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ADG_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ADG_State;

void ADG_init(const ADG_Config* cfg);
void ADG_update(float dt_ms, const VehicleState* vs, ADG_State* state, ActuatorCommands* out);
void ADG_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADG_H */
