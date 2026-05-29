#ifndef ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFINTEGRATION_H

#include "ecu_bridge.h"
#include "AWF.h"

#ifdef __cplusplus
extern "C" {
#endif

void AWF_integration_init(void);
void AWF_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFINTEGRATION_H */
