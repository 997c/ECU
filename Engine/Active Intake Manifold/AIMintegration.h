#ifndef ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMINTEGRATION_H
#define ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMINTEGRATION_H

#include "ecu_bridge.h"
#include "AIM.h"

#ifdef __cplusplus
extern "C" {
#endif

void AIM_integration_init(void);
void AIM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMINTEGRATION_H */
