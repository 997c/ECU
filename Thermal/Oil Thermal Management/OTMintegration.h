#ifndef ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMINTEGRATION_H
#define ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMINTEGRATION_H

#include "ecu_bridge.h"
#include "OTM.h"

#ifdef __cplusplus
extern "C" {
#endif

void OTM_integration_init(void);
void OTM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMINTEGRATION_H */
