#ifndef ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEO_H
#define ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEO_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LEO - Lap Energy Optimization (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} LEO_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} LEO_State;

void LEO_init(const LEO_Config* cfg);
void LEO_update(float dt_ms, const VehicleState* vs, LEO_State* state, ActuatorCommands* out);
void LEO_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEO_H */
