#ifndef ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDE_H
#define ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TDE - Tire Degradation Estimate (Tyres) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TDE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TDE_State;

void TDE_init(const TDE_Config* cfg);
void TDE_update(float dt_ms, const VehicleState* vs, TDE_State* state, ActuatorCommands* out);
void TDE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDE_H */
