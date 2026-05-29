#ifndef ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMINTEGRATION_H
#define ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMINTEGRATION_H

#include "ecu_bridge.h"
#include "ARM.h"

#ifdef __cplusplus
extern "C" {
#endif

void ARM_integration_init(void);
void ARM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMINTEGRATION_H */
