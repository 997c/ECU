#ifndef ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCINTEGRATION_H
#define ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCINTEGRATION_H

#include "ecu_bridge.h"
#include "VSC.h"

#ifdef __cplusplus
extern "C" {
#endif

void VSC_integration_init(void);
void VSC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCINTEGRATION_H */
