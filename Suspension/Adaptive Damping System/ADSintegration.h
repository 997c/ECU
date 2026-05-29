#ifndef ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSINTEGRATION_H
#define ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSINTEGRATION_H

#include "ecu_bridge.h"
#include "ADS.h"

#ifdef __cplusplus
extern "C" {
#endif

void ADS_integration_init(void);
void ADS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSINTEGRATION_H */
