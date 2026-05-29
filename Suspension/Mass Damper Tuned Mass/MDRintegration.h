#ifndef ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRINTEGRATION_H
#define ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRINTEGRATION_H

#include "ecu_bridge.h"
#include "MDR.h"

#ifdef __cplusplus
extern "C" {
#endif

void MDR_integration_init(void);
void MDR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRINTEGRATION_H */
