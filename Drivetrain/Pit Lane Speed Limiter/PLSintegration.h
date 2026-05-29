#ifndef ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSINTEGRATION_H
#define ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSINTEGRATION_H

#include "ecu_bridge.h"
#include "PLS.h"

#ifdef __cplusplus
extern "C" {
#endif

void PLS_integration_init(void);
void PLS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSINTEGRATION_H */
