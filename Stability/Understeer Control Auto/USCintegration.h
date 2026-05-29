#ifndef ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCINTEGRATION_H
#define ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCINTEGRATION_H

#include "ecu_bridge.h"
#include "USC.h"

#ifdef __cplusplus
extern "C" {
#endif

void USC_integration_init(void);
void USC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCINTEGRATION_H */
