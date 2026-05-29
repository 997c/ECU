#ifndef ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRINTEGRATION_H
#define ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRINTEGRATION_H

#include "ecu_bridge.h"
#include "SLR.h"

#ifdef __cplusplus
extern "C" {
#endif

void SLR_integration_init(void);
void SLR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRINTEGRATION_H */
