#ifndef ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCINTEGRATION_H
#define ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCINTEGRATION_H

#include "ecu_bridge.h"
#include "DBC.h"

#ifdef __cplusplus
extern "C" {
#endif

void DBC_integration_init(void);
void DBC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCINTEGRATION_H */
