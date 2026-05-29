#ifndef ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSINTEGRATION_H
#define ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSINTEGRATION_H

#include "ecu_bridge.h"
#include "ABS.h"

#ifdef __cplusplus
extern "C" {
#endif

void ABS_integration_init(void);
void ABS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSINTEGRATION_H */
