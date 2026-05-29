#ifndef ECU_TYRES_TIRE_STATE_ESTIMATION_TSE_H
#define ECU_TYRES_TIRE_STATE_ESTIMATION_TSE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TSE - Tire State Estimation (Tyres) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TSE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TSE_State;

void TSE_init(const TSE_Config* cfg);
void TSE_update(float dt_ms, const VehicleState* vs, TSE_State* state, ActuatorCommands* out);
void TSE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_STATE_ESTIMATION_TSE_H */
