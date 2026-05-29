#ifndef ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKINTEGRATION_H
#define ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKINTEGRATION_H

#include "ecu_bridge.h"
#include "MGK.h"

#ifdef __cplusplus
extern "C" {
#endif

void MGK_integration_init(void);
void MGK_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKINTEGRATION_H */
