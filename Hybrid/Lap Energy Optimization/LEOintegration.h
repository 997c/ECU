#ifndef ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOINTEGRATION_H
#define ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOINTEGRATION_H

#include "ecu_bridge.h"
#include "LEO.h"

#ifdef __cplusplus
extern "C" {
#endif

void LEO_integration_init(void);
void LEO_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOINTEGRATION_H */
