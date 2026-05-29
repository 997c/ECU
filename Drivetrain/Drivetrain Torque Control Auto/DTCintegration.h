#ifndef ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCINTEGRATION_H
#define ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCINTEGRATION_H

#include "ecu_bridge.h"
#include "DTC.h"

#ifdef __cplusplus
extern "C" {
#endif

void DTC_integration_init(void);
void DTC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCINTEGRATION_H */
