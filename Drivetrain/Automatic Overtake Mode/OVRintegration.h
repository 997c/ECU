#ifndef ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRINTEGRATION_H
#define ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRINTEGRATION_H

#include "ecu_bridge.h"
#include "OVR.h"

#ifdef __cplusplus
extern "C" {
#endif

void OVR_integration_init(void);
void OVR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRINTEGRATION_H */
