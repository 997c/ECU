#ifndef ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMINTEGRATION_H
#define ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMINTEGRATION_H

#include "ecu_bridge.h"
#include "EDM.h"

#ifdef __cplusplus
extern "C" {
#endif

void EDM_integration_init(void);
void EDM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMINTEGRATION_H */
