#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHINTEGRATION_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHINTEGRATION_H

#include "ecu_bridge.h"
#include "ARH.h"

#ifdef __cplusplus
extern "C" {
#endif

void ARH_integration_init(void);
void ARH_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHINTEGRATION_H */
