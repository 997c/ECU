#ifndef ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTINTEGRATION_H
#define ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTINTEGRATION_H

#include "ecu_bridge.h"
#include "AVT.h"

#ifdef __cplusplus
extern "C" {
#endif

void AVT_integration_init(void);
void AVT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTINTEGRATION_H */
