#ifndef ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCT_H
#define ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TCT - Tire Carcass Temperature Model (Tyres) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TCT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TCT_State;

void TCT_init(const TCT_Config* cfg);
void TCT_update(float dt_ms, const VehicleState* vs, TCT_State* state, ActuatorCommands* out);
void TCT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCT_H */
