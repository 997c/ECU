#ifndef ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2INTEGRATION_H
#define ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2INTEGRATION_H

#include "ecu_bridge.h"
#include "VGT2.h"

#ifdef __cplusplus
extern "C" {
#endif

void VGT2_integration_init(void);
void VGT2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2INTEGRATION_H */
