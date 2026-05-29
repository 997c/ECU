#ifndef ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLEINTEGRATION_H
#define ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLEINTEGRATION_H

#include "ecu_bridge.h"
#include "WLE.h"

#ifdef __cplusplus
extern "C" {
#endif

void WLE_integration_init(void);
void WLE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLEINTEGRATION_H */
