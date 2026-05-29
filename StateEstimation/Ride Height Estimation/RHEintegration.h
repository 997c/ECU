#ifndef ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHEINTEGRATION_H
#define ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHEINTEGRATION_H

#include "ecu_bridge.h"
#include "RHE.h"

#ifdef __cplusplus
extern "C" {
#endif

void RHE_integration_init(void);
void RHE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHEINTEGRATION_H */
