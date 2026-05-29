#ifndef ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSINTEGRATION_H

#include "ecu_bridge.h"
#include "AVS.h"

#ifdef __cplusplus
extern "C" {
#endif

void AVS_integration_init(void);
void AVS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSINTEGRATION_H */
