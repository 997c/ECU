#ifndef ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGINTEGRATION_H
#define ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGINTEGRATION_H

#include "ecu_bridge.h"
#include "VTG.h"

#ifdef __cplusplus
extern "C" {
#endif

void VTG_integration_init(void);
void VTG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGINTEGRATION_H */
