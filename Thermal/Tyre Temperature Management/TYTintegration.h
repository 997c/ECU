#ifndef ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTINTEGRATION_H
#define ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTINTEGRATION_H

#include "ecu_bridge.h"
#include "TYT.h"

#ifdef __cplusplus
extern "C" {
#endif

void TYT_integration_init(void);
void TYT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTINTEGRATION_H */
