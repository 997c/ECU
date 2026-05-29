#ifndef ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICINTEGRATION_H
#define ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICINTEGRATION_H

#include "ecu_bridge.h"
#include "FRIC.h"

#ifdef __cplusplus
extern "C" {
#endif

void FRIC_integration_init(void);
void FRIC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICINTEGRATION_H */
