#ifndef ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTINTEGRATION_H

#include "ecu_bridge.h"
#include "AFT.h"

#ifdef __cplusplus
extern "C" {
#endif

void AFT_integration_init(void);
void AFT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTINTEGRATION_H */
