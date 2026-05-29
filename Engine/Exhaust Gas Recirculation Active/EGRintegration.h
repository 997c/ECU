#ifndef ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRINTEGRATION_H
#define ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRINTEGRATION_H

#include "ecu_bridge.h"
#include "EGR.h"

#ifdef __cplusplus
extern "C" {
#endif

void EGR_integration_init(void);
void EGR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRINTEGRATION_H */
