#ifndef ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLINTEGRATION_H
#define ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLINTEGRATION_H

#include "ecu_bridge.h"
#include "SPL.h"

#ifdef __cplusplus
extern "C" {
#endif

void SPL_integration_init(void);
void SPL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLINTEGRATION_H */
