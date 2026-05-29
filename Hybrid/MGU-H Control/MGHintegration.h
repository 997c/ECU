#ifndef ECU_HYBRID_MGU_H_CONTROL_MGHINTEGRATION_H
#define ECU_HYBRID_MGU_H_CONTROL_MGHINTEGRATION_H

#include "ecu_bridge.h"
#include "MGH.h"

#ifdef __cplusplus
extern "C" {
#endif

void MGH_integration_init(void);
void MGH_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_H_CONTROL_MGHINTEGRATION_H */
