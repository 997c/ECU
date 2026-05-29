#ifndef ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALAINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALAINTEGRATION_H

#include "ecu_bridge.h"
#include "ALA.h"

#ifdef __cplusplus
extern "C" {
#endif

void ALA_integration_init(void);
void ALA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALAINTEGRATION_H */
