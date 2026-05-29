#ifndef ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGINTEGRATION_H
#define ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGINTEGRATION_H

#include "ecu_bridge.h"
#include "VIG.h"

#ifdef __cplusplus
extern "C" {
#endif

void VIG_integration_init(void);
void VIG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGINTEGRATION_H */
