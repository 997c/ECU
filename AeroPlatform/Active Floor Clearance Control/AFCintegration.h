#ifndef ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCINTEGRATION_H
#define ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCINTEGRATION_H

#include "ecu_bridge.h"
#include "AFC.h"

#ifdef __cplusplus
extern "C" {
#endif

void AFC_integration_init(void);
void AFC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCINTEGRATION_H */
