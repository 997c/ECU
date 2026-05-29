#ifndef ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDINTEGRATION_H
#define ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDINTEGRATION_H

#include "ecu_bridge.h"
#include "EBD.h"

#ifdef __cplusplus
extern "C" {
#endif

void EBD_integration_init(void);
void EBD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDINTEGRATION_H */
