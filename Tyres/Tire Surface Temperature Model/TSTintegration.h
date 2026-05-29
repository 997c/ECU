#ifndef ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTINTEGRATION_H
#define ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTINTEGRATION_H

#include "ecu_bridge.h"
#include "TST.h"

#ifdef __cplusplus
extern "C" {
#endif

void TST_integration_init(void);
void TST_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTINTEGRATION_H */
