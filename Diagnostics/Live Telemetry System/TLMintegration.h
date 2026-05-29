#ifndef ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMINTEGRATION_H
#define ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMINTEGRATION_H

#include "ecu_bridge.h"
#include "TLM.h"

#ifdef __cplusplus
extern "C" {
#endif

void TLM_integration_init(void);
void TLM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMINTEGRATION_H */
