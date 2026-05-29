#ifndef ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCINTEGRATION_H
#define ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCINTEGRATION_H

#include "ecu_bridge.h"
#include "SOC.h"

#ifdef __cplusplus
extern "C" {
#endif

void SOC_integration_init(void);
void SOC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCINTEGRATION_H */
