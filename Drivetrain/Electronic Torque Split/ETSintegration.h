#ifndef ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSINTEGRATION_H
#define ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSINTEGRATION_H

#include "ecu_bridge.h"
#include "ETS.h"

#ifdef __cplusplus
extern "C" {
#endif

void ETS_integration_init(void);
void ETS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSINTEGRATION_H */
