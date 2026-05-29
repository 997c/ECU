#ifndef ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TST_H
#define ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TST_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TST - Tire Surface Temperature Model (Tyres) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TST_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TST_State;

void TST_init(const TST_Config* cfg);
void TST_update(float dt_ms, const VehicleState* vs, TST_State* state, ActuatorCommands* out);
void TST_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TST_H */
