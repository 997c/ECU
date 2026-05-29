#ifndef ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBINTEGRATION_H
#define ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBINTEGRATION_H

#include "ecu_bridge.h"
#include "TVB.h"

#ifdef __cplusplus
extern "C" {
#endif

void TVB_integration_init(void);
void TVB_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBINTEGRATION_H */
