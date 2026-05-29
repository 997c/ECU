#ifndef ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMINTEGRATION_H
#define ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMINTEGRATION_H

#include "ecu_bridge.h"
#include "BTM.h"

#ifdef __cplusplus
extern "C" {
#endif

void BTM_integration_init(void);
void BTM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMINTEGRATION_H */
