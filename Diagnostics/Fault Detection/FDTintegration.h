#ifndef ECU_DIAGNOSTICS_FAULT_DETECTION_FDTINTEGRATION_H
#define ECU_DIAGNOSTICS_FAULT_DETECTION_FDTINTEGRATION_H

#include "ecu_bridge.h"
#include "FDT.h"

#ifdef __cplusplus
extern "C" {
#endif

void FDT_integration_init(void);
void FDT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_FAULT_DETECTION_FDTINTEGRATION_H */
