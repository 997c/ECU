#ifndef ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCINTEGRATION_H
#define ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCINTEGRATION_H

#include "ecu_bridge.h"
#include "DSC.h"

#ifdef __cplusplus
extern "C" {
#endif

void DSC_integration_init(void);
void DSC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCINTEGRATION_H */
