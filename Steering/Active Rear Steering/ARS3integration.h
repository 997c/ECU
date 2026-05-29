#ifndef ECU_STEERING_ACTIVE_REAR_STEERING_ARS3INTEGRATION_H
#define ECU_STEERING_ACTIVE_REAR_STEERING_ARS3INTEGRATION_H

#include "ecu_bridge.h"
#include "ARS3.h"

#ifdef __cplusplus
extern "C" {
#endif

void ARS3_integration_init(void);
void ARS3_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_REAR_STEERING_ARS3INTEGRATION_H */
