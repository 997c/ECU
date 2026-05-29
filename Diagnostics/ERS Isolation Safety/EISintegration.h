#ifndef ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISINTEGRATION_H
#define ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISINTEGRATION_H

#include "ecu_bridge.h"
#include "EIS.h"

#ifdef __cplusplus
extern "C" {
#endif

void EIS_integration_init(void);
void EIS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISINTEGRATION_H */
