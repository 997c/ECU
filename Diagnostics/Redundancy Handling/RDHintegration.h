#ifndef ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHINTEGRATION_H
#define ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHINTEGRATION_H

#include "ecu_bridge.h"
#include "RDH.h"

#ifdef __cplusplus
extern "C" {
#endif

void RDH_integration_init(void);
void RDH_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHINTEGRATION_H */
