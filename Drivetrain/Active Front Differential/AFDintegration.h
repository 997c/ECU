#ifndef ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDINTEGRATION_H
#define ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDINTEGRATION_H

#include "ecu_bridge.h"
#include "AFD.h"

#ifdef __cplusplus
extern "C" {
#endif

void AFD_integration_init(void);
void AFD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDINTEGRATION_H */
