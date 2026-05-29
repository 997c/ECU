#ifndef ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRINTEGRATION_H
#define ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRINTEGRATION_H

#include "ecu_bridge.h"
#include "VCR.h"

#ifdef __cplusplus
extern "C" {
#endif

void VCR_integration_init(void);
void VCR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRINTEGRATION_H */
