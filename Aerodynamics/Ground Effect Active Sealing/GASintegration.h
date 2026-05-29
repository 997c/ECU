#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASINTEGRATION_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASINTEGRATION_H

#include "ecu_bridge.h"
#include "GAS.h"

#ifdef __cplusplus
extern "C" {
#endif

void GAS_integration_init(void);
void GAS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASINTEGRATION_H */
