#ifndef ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSINTEGRATION_H
#define ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSINTEGRATION_H

#include "ecu_bridge.h"
#include "RCS.h"

#ifdef __cplusplus
extern "C" {
#endif

void RCS_integration_init(void);
void RCS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSINTEGRATION_H */
