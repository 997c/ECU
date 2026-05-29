#ifndef ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTINTEGRATION_H

#include "ecu_bridge.h"
#include "ACT.h"

#ifdef __cplusplus
extern "C" {
#endif

void ACT_integration_init(void);
void ACT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTINTEGRATION_H */
