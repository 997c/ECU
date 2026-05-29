#ifndef ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRINTEGRATION_H
#define ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRINTEGRATION_H

#include "ecu_bridge.h"
#include "APR.h"

#ifdef __cplusplus
extern "C" {
#endif

void APR_integration_init(void);
void APR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRINTEGRATION_H */
