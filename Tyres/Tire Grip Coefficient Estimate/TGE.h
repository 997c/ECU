#ifndef ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGE_H
#define ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TGE - Tire Grip Coefficient Estimate (Tyres) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TGE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TGE_State;

void TGE_init(const TGE_Config* cfg);
void TGE_update(float dt_ms, const VehicleState* vs, TGE_State* state, ActuatorCommands* out);
void TGE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGE_H */
