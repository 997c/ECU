#ifndef ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCINTEGRATION_H

#include "ecu_bridge.h"
#include "ARC.h"

#ifdef __cplusplus
extern "C" {
#endif

void ARC_integration_init(void);
void ARC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCINTEGRATION_H */
