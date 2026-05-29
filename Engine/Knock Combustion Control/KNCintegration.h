#ifndef ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCINTEGRATION_H
#define ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCINTEGRATION_H

#include "ecu_bridge.h"
#include "KNC.h"

#ifdef __cplusplus
extern "C" {
#endif

void KNC_integration_init(void);
void KNC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCINTEGRATION_H */
