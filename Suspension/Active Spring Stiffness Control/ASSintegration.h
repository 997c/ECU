#ifndef ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSINTEGRATION_H

#include "ecu_bridge.h"
#include "ASS.h"

#ifdef __cplusplus
extern "C" {
#endif

void ASS_integration_init(void);
void ASS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSINTEGRATION_H */
