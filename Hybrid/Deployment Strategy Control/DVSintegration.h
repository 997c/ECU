#ifndef ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSINTEGRATION_H
#define ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSINTEGRATION_H

#include "ecu_bridge.h"
#include "DVS.h"

#ifdef __cplusplus
extern "C" {
#endif

void DVS_integration_init(void);
void DVS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSINTEGRATION_H */
