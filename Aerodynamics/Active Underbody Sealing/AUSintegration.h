#ifndef ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSINTEGRATION_H

#include "ecu_bridge.h"
#include "AUS.h"

#ifdef __cplusplus
extern "C" {
#endif

void AUS_integration_init(void);
void AUS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSINTEGRATION_H */
