#ifndef ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCINTEGRATION_H

#include "ecu_bridge.h"
#include "ABC.h"

#ifdef __cplusplus
extern "C" {
#endif

void ABC_integration_init(void);
void ABC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCINTEGRATION_H */
