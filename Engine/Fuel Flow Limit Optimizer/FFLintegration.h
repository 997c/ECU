#ifndef ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLINTEGRATION_H
#define ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLINTEGRATION_H

#include "ecu_bridge.h"
#include "FFL.h"

#ifdef __cplusplus
extern "C" {
#endif

void FFL_integration_init(void);
void FFL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLINTEGRATION_H */
