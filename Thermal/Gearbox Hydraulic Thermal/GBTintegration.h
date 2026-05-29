#ifndef ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTINTEGRATION_H
#define ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTINTEGRATION_H

#include "ecu_bridge.h"
#include "GBT.h"

#ifdef __cplusplus
extern "C" {
#endif

void GBT_integration_init(void);
void GBT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTINTEGRATION_H */
