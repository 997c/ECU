#ifndef ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISINTEGRATION_H
#define ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISINTEGRATION_H

#include "ecu_bridge.h"
#include "AIS.h"

#ifdef __cplusplus
extern "C" {
#endif

void AIS_integration_init(void);
void AIS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISINTEGRATION_H */
