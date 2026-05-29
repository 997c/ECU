#ifndef ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSAINTEGRATION_H
#define ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSAINTEGRATION_H

#include "ecu_bridge.h"
#include "FSA.h"

#ifdef __cplusplus
extern "C" {
#endif

void FSA_integration_init(void);
void FSA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSAINTEGRATION_H */
