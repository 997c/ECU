#ifndef ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSINTEGRATION_H
#define ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSINTEGRATION_H

#include "ecu_bridge.h"
#include "TCS.h"

#ifdef __cplusplus
extern "C" {
#endif

void TCS_integration_init(void);
void TCS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSINTEGRATION_H */
