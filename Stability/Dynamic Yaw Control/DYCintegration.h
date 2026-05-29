#ifndef ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCINTEGRATION_H
#define ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCINTEGRATION_H

#include "ecu_bridge.h"
#include "DYC.h"

#ifdef __cplusplus
extern "C" {
#endif

void DYC_integration_init(void);
void DYC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCINTEGRATION_H */
