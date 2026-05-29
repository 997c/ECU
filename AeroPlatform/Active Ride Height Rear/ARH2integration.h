#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2INTEGRATION_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2INTEGRATION_H

#include "ecu_bridge.h"
#include "ARH2.h"

#ifdef __cplusplus
extern "C" {
#endif

void ARH2_integration_init(void);
void ARH2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2INTEGRATION_H */
