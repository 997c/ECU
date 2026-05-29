#ifndef ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVS_H
#define ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* HVS - Harvest Strategy Control (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} HVS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} HVS_State;

void HVS_init(const HVS_Config* cfg);
void HVS_update(float dt_ms, const VehicleState* vs, HVS_State* state, ActuatorCommands* out);
void HVS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVS_H */
