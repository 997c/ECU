#ifndef ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDINTEGRATION_H

#include "ecu_bridge.h"
#include "ABD.h"

#ifdef __cplusplus
extern "C" {
#endif

void ABD_integration_init(void);
void ABD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDINTEGRATION_H */
