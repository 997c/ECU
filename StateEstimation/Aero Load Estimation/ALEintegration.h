#ifndef ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALEINTEGRATION_H
#define ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALEINTEGRATION_H

#include "ecu_bridge.h"
#include "ALE.h"

#ifdef __cplusplus
extern "C" {
#endif

void ALE_integration_init(void);
void ALE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALEINTEGRATION_H */
