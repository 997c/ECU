#ifndef ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSEINTEGRATION_H
#define ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSEINTEGRATION_H

#include "ecu_bridge.h"
#include "SSE.h"

#ifdef __cplusplus
extern "C" {
#endif

void SSE_integration_init(void);
void SSE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSEINTEGRATION_H */
