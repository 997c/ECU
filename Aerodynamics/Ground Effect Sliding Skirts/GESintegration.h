#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESINTEGRATION_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESINTEGRATION_H

#include "ecu_bridge.h"
#include "GES.h"

#ifdef __cplusplus
extern "C" {
#endif

void GES_integration_init(void);
void GES_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESINTEGRATION_H */
