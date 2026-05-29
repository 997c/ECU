#ifndef ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCINTEGRATION_H
#define ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCINTEGRATION_H

#include "ecu_bridge.h"
#include "AYC.h"

#ifdef __cplusplus
extern "C" {
#endif

void AYC_integration_init(void);
void AYC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCINTEGRATION_H */
