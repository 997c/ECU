#ifndef ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSINTEGRATION_H
#define ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSINTEGRATION_H

#include "ecu_bridge.h"
#include "DRS.h"

#ifdef __cplusplus
extern "C" {
#endif

void DRS_integration_init(void);
void DRS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSINTEGRATION_H */
