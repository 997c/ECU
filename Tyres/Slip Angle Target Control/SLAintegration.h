#ifndef ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLAINTEGRATION_H
#define ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLAINTEGRATION_H

#include "ecu_bridge.h"
#include "SLA.h"

#ifdef __cplusplus
extern "C" {
#endif

void SLA_integration_init(void);
void SLA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLAINTEGRATION_H */
