#ifndef ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3INTEGRATION_H
#define ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3INTEGRATION_H

#include "ecu_bridge.h"
#include "ABS3.h"

#ifdef __cplusplus
extern "C" {
#endif

void ABS3_integration_init(void);
void ABS3_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3INTEGRATION_H */
