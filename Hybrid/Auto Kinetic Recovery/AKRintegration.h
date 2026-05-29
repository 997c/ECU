#ifndef ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRINTEGRATION_H
#define ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRINTEGRATION_H

#include "ecu_bridge.h"
#include "AKR.h"

#ifdef __cplusplus
extern "C" {
#endif

void AKR_integration_init(void);
void AKR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRINTEGRATION_H */
