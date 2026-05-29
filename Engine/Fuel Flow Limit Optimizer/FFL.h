#ifndef ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFL_H
#define ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFL_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FFL - Fuel Flow Limit Optimizer (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} FFL_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} FFL_State;

void FFL_init(const FFL_Config* cfg);
void FFL_update(float dt_ms, const VehicleState* vs, FFL_State* state, ActuatorCommands* out);
void FFL_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFL_H */
