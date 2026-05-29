#ifndef ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSEINTEGRATION_H
#define ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSEINTEGRATION_H

#include "ecu_bridge.h"
#include "VSE.h"

#ifdef __cplusplus
extern "C" {
#endif

void VSE_integration_init(void);
void VSE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSEINTEGRATION_H */
