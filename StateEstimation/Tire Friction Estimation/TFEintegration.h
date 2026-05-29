#ifndef ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFEINTEGRATION_H
#define ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFEINTEGRATION_H

#include "ecu_bridge.h"
#include "TFE.h"

#ifdef __cplusplus
extern "C" {
#endif

void TFE_integration_init(void);
void TFE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFEINTEGRATION_H */
