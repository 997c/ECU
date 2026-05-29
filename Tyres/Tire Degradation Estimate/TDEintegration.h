#ifndef ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDEINTEGRATION_H
#define ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDEINTEGRATION_H

#include "ecu_bridge.h"
#include "TDE.h"

#ifdef __cplusplus
extern "C" {
#endif

void TDE_integration_init(void);
void TDE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDEINTEGRATION_H */
