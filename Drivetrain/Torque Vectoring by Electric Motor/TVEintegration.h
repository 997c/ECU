#ifndef ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVEINTEGRATION_H
#define ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVEINTEGRATION_H

#include "ecu_bridge.h"
#include "TVE.h"

#ifdef __cplusplus
extern "C" {
#endif

void TVE_integration_init(void);
void TVE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVEINTEGRATION_H */
