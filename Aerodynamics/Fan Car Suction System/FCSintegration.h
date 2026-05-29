#ifndef ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSINTEGRATION_H
#define ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSINTEGRATION_H

#include "ecu_bridge.h"
#include "FCS.h"

#ifdef __cplusplus
extern "C" {
#endif

void FCS_integration_init(void);
void FCS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSINTEGRATION_H */
