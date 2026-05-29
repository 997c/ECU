#ifndef ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRINTEGRATION_H
#define ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRINTEGRATION_H

#include "ecu_bridge.h"
#include "AVR.h"

#ifdef __cplusplus
extern "C" {
#endif

void AVR_integration_init(void);
void AVR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRINTEGRATION_H */
