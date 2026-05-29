#ifndef ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMINTEGRATION_H
#define ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMINTEGRATION_H

#include "ecu_bridge.h"
#include "AFM.h"

#ifdef __cplusplus
extern "C" {
#endif

void AFM_integration_init(void);
void AFM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMINTEGRATION_H */
