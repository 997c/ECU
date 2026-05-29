#ifndef ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLINTEGRATION_H
#define ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLINTEGRATION_H

#include "ecu_bridge.h"
#include "EDL.h"

#ifdef __cplusplus
extern "C" {
#endif

void EDL_integration_init(void);
void EDL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLINTEGRATION_H */
