#ifndef ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2INTEGRATION_H
#define ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2INTEGRATION_H

#include "ecu_bridge.h"
#include "APC2.h"

#ifdef __cplusplus
extern "C" {
#endif

void APC2_integration_init(void);
void APC2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2INTEGRATION_H */
