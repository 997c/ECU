#ifndef ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRINTEGRATION_H
#define ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRINTEGRATION_H

#include "ecu_bridge.h"
#include "UTR.h"

#ifdef __cplusplus
extern "C" {
#endif

void UTR_integration_init(void);
void UTR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRINTEGRATION_H */
