#ifndef ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSINTEGRATION_H

#include "ecu_bridge.h"
#include "AHS.h"

#ifdef __cplusplus
extern "C" {
#endif

void AHS_integration_init(void);
void AHS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSINTEGRATION_H */
