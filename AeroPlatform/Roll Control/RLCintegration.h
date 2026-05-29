#ifndef ECU_AERO_PLATFORM_ROLL_CONTROL_RLCINTEGRATION_H
#define ECU_AERO_PLATFORM_ROLL_CONTROL_RLCINTEGRATION_H

#include "ecu_bridge.h"
#include "RLC.h"

#ifdef __cplusplus
extern "C" {
#endif

void RLC_integration_init(void);
void RLC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ROLL_CONTROL_RLCINTEGRATION_H */
