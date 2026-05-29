#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPINTEGRATION_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPINTEGRATION_H

#include "ecu_bridge.h"
#include "ABP.h"

#ifdef __cplusplus
extern "C" {
#endif

void ABP_integration_init(void);
void ABP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPINTEGRATION_H */
