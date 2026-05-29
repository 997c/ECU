#ifndef ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSINTEGRATION_H
#define ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSINTEGRATION_H

#include "ecu_bridge.h"
#include "HVS.h"

#ifdef __cplusplus
extern "C" {
#endif

void HVS_integration_init(void);
void HVS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSINTEGRATION_H */
