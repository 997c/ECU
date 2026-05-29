#ifndef ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBAINTEGRATION_H
#define ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBAINTEGRATION_H

#include "ecu_bridge.h"
#include "EBA.h"

#ifdef __cplusplus
extern "C" {
#endif

void EBA_integration_init(void);
void EBA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBAINTEGRATION_H */
