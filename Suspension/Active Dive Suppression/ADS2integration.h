#ifndef ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2INTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2INTEGRATION_H

#include "ecu_bridge.h"
#include "ADS2.h"

#ifdef __cplusplus
extern "C" {
#endif

void ADS2_integration_init(void);
void ADS2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2INTEGRATION_H */
