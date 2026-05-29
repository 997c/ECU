#ifndef ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSINTEGRATION_H
#define ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSINTEGRATION_H

#include "ecu_bridge.h"
#include "EPS.h"

#ifdef __cplusplus
extern "C" {
#endif

void EPS_integration_init(void);
void EPS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSINTEGRATION_H */
