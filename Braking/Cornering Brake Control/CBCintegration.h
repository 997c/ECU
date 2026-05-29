#ifndef ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCINTEGRATION_H
#define ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCINTEGRATION_H

#include "ecu_bridge.h"
#include "CBC.h"

#ifdef __cplusplus
extern "C" {
#endif

void CBC_integration_init(void);
void CBC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCINTEGRATION_H */
