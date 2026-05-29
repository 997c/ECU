#ifndef ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCINTEGRATION_H
#define ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCINTEGRATION_H

#include "ecu_bridge.h"
#include "APC.h"

#ifdef __cplusplus
extern "C" {
#endif

void APC_integration_init(void);
void APC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCINTEGRATION_H */
