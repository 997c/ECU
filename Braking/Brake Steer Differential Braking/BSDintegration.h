#ifndef ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDINTEGRATION_H
#define ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDINTEGRATION_H

#include "ecu_bridge.h"
#include "BSD.h"

#ifdef __cplusplus
extern "C" {
#endif

void BSD_integration_init(void);
void BSD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDINTEGRATION_H */
