#ifndef ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLINTEGRATION_H
#define ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLINTEGRATION_H

#include "ecu_bridge.h"
#include "VVL.h"

#ifdef __cplusplus
extern "C" {
#endif

void VVL_integration_init(void);
void VVL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLINTEGRATION_H */
