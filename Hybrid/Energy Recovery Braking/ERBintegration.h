#ifndef ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBINTEGRATION_H
#define ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBINTEGRATION_H

#include "ecu_bridge.h"
#include "ERB.h"

#ifdef __cplusplus
extern "C" {
#endif

void ERB_integration_init(void);
void ERB_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBINTEGRATION_H */
