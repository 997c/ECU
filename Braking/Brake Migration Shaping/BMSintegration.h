#ifndef ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSINTEGRATION_H
#define ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSINTEGRATION_H

#include "ecu_bridge.h"
#include "BMS.h"

#ifdef __cplusplus
extern "C" {
#endif

void BMS_integration_init(void);
void BMS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSINTEGRATION_H */
