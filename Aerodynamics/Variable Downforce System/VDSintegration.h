#ifndef ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSINTEGRATION_H
#define ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSINTEGRATION_H

#include "ecu_bridge.h"
#include "VDS.h"

#ifdef __cplusplus
extern "C" {
#endif

void VDS_integration_init(void);
void VDS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSINTEGRATION_H */
