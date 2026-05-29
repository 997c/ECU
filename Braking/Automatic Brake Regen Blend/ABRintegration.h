#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRINTEGRATION_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRINTEGRATION_H

#include "ecu_bridge.h"
#include "ABR.h"

#ifdef __cplusplus
extern "C" {
#endif

void ABR_integration_init(void);
void ABR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRINTEGRATION_H */
