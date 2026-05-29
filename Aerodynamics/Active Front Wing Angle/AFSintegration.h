#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSINTEGRATION_H

#include "ecu_bridge.h"
#include "AFS.h"

#ifdef __cplusplus
extern "C" {
#endif

void AFS_integration_init(void);
void AFS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSINTEGRATION_H */
