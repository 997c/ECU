#ifndef ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSINTEGRATION_H

#include "ecu_bridge.h"
#include "AKS.h"

#ifdef __cplusplus
extern "C" {
#endif

void AKS_integration_init(void);
void AKS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSINTEGRATION_H */
