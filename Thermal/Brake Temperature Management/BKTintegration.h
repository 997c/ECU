#ifndef ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTINTEGRATION_H
#define ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTINTEGRATION_H

#include "ecu_bridge.h"
#include "BKT.h"

#ifdef __cplusplus
extern "C" {
#endif

void BKT_integration_init(void);
void BKT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTINTEGRATION_H */
