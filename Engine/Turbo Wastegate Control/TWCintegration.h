#ifndef ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCINTEGRATION_H
#define ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCINTEGRATION_H

#include "ecu_bridge.h"
#include "TWC.h"

#ifdef __cplusplus
extern "C" {
#endif

void TWC_integration_init(void);
void TWC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCINTEGRATION_H */
