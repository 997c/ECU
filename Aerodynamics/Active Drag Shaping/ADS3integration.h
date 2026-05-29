#ifndef ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3INTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3INTEGRATION_H

#include "ecu_bridge.h"
#include "ADS3.h"

#ifdef __cplusplus
extern "C" {
#endif

void ADS3_integration_init(void);
void ADS3_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3INTEGRATION_H */
