#ifndef ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSAINTEGRATION_H
#define ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSAINTEGRATION_H

#include "ecu_bridge.h"
#include "CSA.h"

#ifdef __cplusplus
extern "C" {
#endif

void CSA_integration_init(void);
void CSA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSAINTEGRATION_H */
