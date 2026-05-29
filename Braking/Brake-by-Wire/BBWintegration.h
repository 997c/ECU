#ifndef ECU_BRAKING_BRAKE_BY_WIRE_BBWINTEGRATION_H
#define ECU_BRAKING_BRAKE_BY_WIRE_BBWINTEGRATION_H

#include "ecu_bridge.h"
#include "BBW.h"

#ifdef __cplusplus
extern "C" {
#endif

void BBW_integration_init(void);
void BBW_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_BY_WIRE_BBWINTEGRATION_H */
