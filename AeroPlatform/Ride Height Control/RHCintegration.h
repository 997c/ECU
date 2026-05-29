#ifndef ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCINTEGRATION_H
#define ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCINTEGRATION_H

#include "ecu_bridge.h"
#include "RHC.h"

#ifdef __cplusplus
extern "C" {
#endif

void RHC_integration_init(void);
void RHC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCINTEGRATION_H */
