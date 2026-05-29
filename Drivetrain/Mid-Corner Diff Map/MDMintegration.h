#ifndef ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMINTEGRATION_H
#define ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMINTEGRATION_H

#include "ecu_bridge.h"
#include "MDM.h"

#ifdef __cplusplus
extern "C" {
#endif

void MDM_integration_init(void);
void MDM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMINTEGRATION_H */
