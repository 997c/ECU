#ifndef ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCINTEGRATION_H
#define ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCINTEGRATION_H

#include "ecu_bridge.h"
#include "ESC.h"

#ifdef __cplusplus
extern "C" {
#endif

void ESC_integration_init(void);
void ESC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCINTEGRATION_H */
