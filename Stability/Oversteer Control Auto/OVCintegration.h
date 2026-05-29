#ifndef ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCINTEGRATION_H
#define ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCINTEGRATION_H

#include "ecu_bridge.h"
#include "OVC.h"

#ifdef __cplusplus
extern "C" {
#endif

void OVC_integration_init(void);
void OVC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCINTEGRATION_H */
