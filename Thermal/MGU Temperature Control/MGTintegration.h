#ifndef ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTINTEGRATION_H
#define ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTINTEGRATION_H

#include "ecu_bridge.h"
#include "MGT.h"

#ifdef __cplusplus
extern "C" {
#endif

void MGT_integration_init(void);
void MGT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTINTEGRATION_H */
