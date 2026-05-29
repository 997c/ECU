#ifndef ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCINTEGRATION_H
#define ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCINTEGRATION_H

#include "ecu_bridge.h"
#include "ETC.h"

#ifdef __cplusplus
extern "C" {
#endif

void ETC_integration_init(void);
void ETC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCINTEGRATION_H */
