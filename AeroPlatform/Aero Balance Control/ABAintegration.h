#ifndef ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABAINTEGRATION_H
#define ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABAINTEGRATION_H

#include "ecu_bridge.h"
#include "ABA.h"

#ifdef __cplusplus
extern "C" {
#endif

void ABA_integration_init(void);
void ABA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABAINTEGRATION_H */
