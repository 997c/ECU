#ifndef ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCINTEGRATION_H
#define ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCINTEGRATION_H

#include "ecu_bridge.h"
#include "HVC.h"

#ifdef __cplusplus
extern "C" {
#endif

void HVC_integration_init(void);
void HVC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCINTEGRATION_H */
