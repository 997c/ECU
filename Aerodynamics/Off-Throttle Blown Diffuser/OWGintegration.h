#ifndef ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGINTEGRATION_H
#define ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGINTEGRATION_H

#include "ecu_bridge.h"
#include "OWG.h"

#ifdef __cplusplus
extern "C" {
#endif

void OWG_integration_init(void);
void OWG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGINTEGRATION_H */
