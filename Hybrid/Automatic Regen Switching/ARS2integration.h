#ifndef ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2INTEGRATION_H
#define ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2INTEGRATION_H

#include "ecu_bridge.h"
#include "ARS2.h"

#ifdef __cplusplus
extern "C" {
#endif

void ARS2_integration_init(void);
void ARS2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2INTEGRATION_H */
