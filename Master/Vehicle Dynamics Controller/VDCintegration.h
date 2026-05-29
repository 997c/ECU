#ifndef ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCINTEGRATION_H
#define ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCINTEGRATION_H

#include "ecu_bridge.h"
#include "VDC.h"

#ifdef __cplusplus
extern "C" {
#endif

void VDC_integration_init(void);
void VDC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCINTEGRATION_H */
