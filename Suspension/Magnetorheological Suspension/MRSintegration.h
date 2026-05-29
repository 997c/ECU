#ifndef ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSINTEGRATION_H
#define ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSINTEGRATION_H

#include "ecu_bridge.h"
#include "MRS.h"

#ifdef __cplusplus
extern "C" {
#endif

void MRS_integration_init(void);
void MRS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSINTEGRATION_H */
