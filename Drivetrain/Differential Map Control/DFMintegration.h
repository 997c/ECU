#ifndef ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMINTEGRATION_H
#define ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMINTEGRATION_H

#include "ecu_bridge.h"
#include "DFM.h"

#ifdef __cplusplus
extern "C" {
#endif

void DFM_integration_init(void);
void DFM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMINTEGRATION_H */
