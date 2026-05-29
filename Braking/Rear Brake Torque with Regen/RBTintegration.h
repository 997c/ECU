#ifndef ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTINTEGRATION_H
#define ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTINTEGRATION_H

#include "ecu_bridge.h"
#include "RBT.h"

#ifdef __cplusplus
extern "C" {
#endif

void RBT_integration_init(void);
void RBT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTINTEGRATION_H */
