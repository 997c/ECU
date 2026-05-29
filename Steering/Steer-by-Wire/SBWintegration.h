#ifndef ECU_STEERING_STEER_BY_WIRE_SBWINTEGRATION_H
#define ECU_STEERING_STEER_BY_WIRE_SBWINTEGRATION_H

#include "ecu_bridge.h"
#include "SBW.h"

#ifdef __cplusplus
extern "C" {
#endif

void SBW_integration_init(void);
void SBW_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_STEER_BY_WIRE_SBWINTEGRATION_H */
