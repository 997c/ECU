#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2INTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2INTEGRATION_H

#include "ecu_bridge.h"
#include "AFS2.h"

#ifdef __cplusplus
extern "C" {
#endif

void AFS2_integration_init(void);
void AFS2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2INTEGRATION_H */
