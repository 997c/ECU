#ifndef ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGEINTEGRATION_H
#define ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGEINTEGRATION_H

#include "ecu_bridge.h"
#include "TGE.h"

#ifdef __cplusplus
extern "C" {
#endif

void TGE_integration_init(void);
void TGE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGEINTEGRATION_H */
