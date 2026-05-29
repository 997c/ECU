#ifndef ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARINTEGRATION_H

#include "ecu_bridge.h"
#include "AAR.h"

#ifdef __cplusplus
extern "C" {
#endif

void AAR_integration_init(void);
void AAR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARINTEGRATION_H */
