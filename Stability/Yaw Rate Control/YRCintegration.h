#ifndef ECU_STABILITY_YAW_RATE_CONTROL_YRCINTEGRATION_H
#define ECU_STABILITY_YAW_RATE_CONTROL_YRCINTEGRATION_H

#include "ecu_bridge.h"
#include "YRC.h"

#ifdef __cplusplus
extern "C" {
#endif

void YRC_integration_init(void);
void YRC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_YAW_RATE_CONTROL_YRCINTEGRATION_H */
