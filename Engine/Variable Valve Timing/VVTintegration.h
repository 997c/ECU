#ifndef ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTINTEGRATION_H
#define ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTINTEGRATION_H

#include "ecu_bridge.h"
#include "VVT.h"

#ifdef __cplusplus
extern "C" {
#endif

void VVT_integration_init(void);
void VVT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTINTEGRATION_H */
