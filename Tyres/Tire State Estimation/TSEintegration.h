#ifndef ECU_TYRES_TIRE_STATE_ESTIMATION_TSEINTEGRATION_H
#define ECU_TYRES_TIRE_STATE_ESTIMATION_TSEINTEGRATION_H

#include "ecu_bridge.h"
#include "TSE.h"

#ifdef __cplusplus
extern "C" {
#endif

void TSE_integration_init(void);
void TSE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_STATE_ESTIMATION_TSEINTEGRATION_H */
