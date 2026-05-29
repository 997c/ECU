#ifndef ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCINTEGRATION_H

#include "ecu_bridge.h"
#include "ATC.h"

#ifdef __cplusplus
extern "C" {
#endif

void ATC_integration_init(void);
void ATC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCINTEGRATION_H */
