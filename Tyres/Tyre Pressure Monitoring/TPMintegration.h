#ifndef ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMINTEGRATION_H
#define ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMINTEGRATION_H

#include "ecu_bridge.h"
#include "TPM.h"

#ifdef __cplusplus
extern "C" {
#endif

void TPM_integration_init(void);
void TPM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMINTEGRATION_H */
