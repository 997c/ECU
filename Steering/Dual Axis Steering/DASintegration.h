#ifndef ECU_STEERING_DUAL_AXIS_STEERING_DASINTEGRATION_H
#define ECU_STEERING_DUAL_AXIS_STEERING_DASINTEGRATION_H

#include "ecu_bridge.h"
#include "DAS.h"

#ifdef __cplusplus
extern "C" {
#endif

void DAS_integration_init(void);
void DAS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_DUAL_AXIS_STEERING_DASINTEGRATION_H */
