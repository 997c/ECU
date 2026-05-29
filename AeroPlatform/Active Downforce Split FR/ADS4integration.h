#ifndef ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4INTEGRATION_H
#define ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4INTEGRATION_H

#include "ecu_bridge.h"
#include "ADS4.h"

#ifdef __cplusplus
extern "C" {
#endif

void ADS4_integration_init(void);
void ADS4_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4INTEGRATION_H */
