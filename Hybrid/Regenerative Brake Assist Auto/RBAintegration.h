#ifndef ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBAINTEGRATION_H
#define ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBAINTEGRATION_H

#include "ecu_bridge.h"
#include "RBA.h"

#ifdef __cplusplus
extern "C" {
#endif

void RBA_integration_init(void);
void RBA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBAINTEGRATION_H */
