#ifndef ECU_DRIVETRAIN_LAUNCH_CONTROL_LCINTEGRATION_H
#define ECU_DRIVETRAIN_LAUNCH_CONTROL_LCINTEGRATION_H

#include "ecu_bridge.h"
#include "LC.h"

#ifdef __cplusplus
extern "C" {
#endif

void LC_integration_init(void);
void LC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_LAUNCH_CONTROL_LCINTEGRATION_H */
