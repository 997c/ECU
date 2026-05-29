#ifndef ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABD_H
#define ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABD_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ABD - Active Brake Duct Control (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ABD_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ABD_State;

void ABD_init(const ABD_Config* cfg);
void ABD_update(float dt_ms, const VehicleState* vs, ABD_State* state, ActuatorCommands* out);
void ABD_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABD_H */
