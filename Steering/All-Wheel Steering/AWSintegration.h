#ifndef ECU_STEERING_ALL_WHEEL_STEERING_AWSINTEGRATION_H
#define ECU_STEERING_ALL_WHEEL_STEERING_AWSINTEGRATION_H

#include "ecu_bridge.h"
#include "AWS.h"

#ifdef __cplusplus
extern "C" {
#endif

void AWS_integration_init(void);
void AWS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ALL_WHEEL_STEERING_AWSINTEGRATION_H */
