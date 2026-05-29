#ifndef ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSINTEGRATION_H

#include "ecu_bridge.h"
#include "ARS.h"

#ifdef __cplusplus
extern "C" {
#endif

void ARS_integration_init(void);
void ARS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSINTEGRATION_H */
