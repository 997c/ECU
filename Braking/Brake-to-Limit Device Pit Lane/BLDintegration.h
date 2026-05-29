#ifndef ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDINTEGRATION_H
#define ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDINTEGRATION_H

#include "ecu_bridge.h"
#include "BLD.h"

#ifdef __cplusplus
extern "C" {
#endif

void BLD_integration_init(void);
void BLD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDINTEGRATION_H */
