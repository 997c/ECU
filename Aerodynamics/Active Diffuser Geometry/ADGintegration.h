#ifndef ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGINTEGRATION_H

#include "ecu_bridge.h"
#include "ADG.h"

#ifdef __cplusplus
extern "C" {
#endif

void ADG_integration_init(void);
void ADG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGINTEGRATION_H */
