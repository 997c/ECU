#ifndef ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTINTEGRATION_H
#define ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTINTEGRATION_H

#include "ecu_bridge.h"
#include "ECT.h"

#ifdef __cplusplus
extern "C" {
#endif

void ECT_integration_init(void);
void ECT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTINTEGRATION_H */
