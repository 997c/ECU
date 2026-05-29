#ifndef ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMINTEGRATION_H
#define ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMINTEGRATION_H

#include "ecu_bridge.h"
#include "EBM.h"

#ifdef __cplusplus
extern "C" {
#endif

void EBM_integration_init(void);
void EBM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMINTEGRATION_H */
