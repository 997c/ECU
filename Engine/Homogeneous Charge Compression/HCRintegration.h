#ifndef ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRINTEGRATION_H
#define ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRINTEGRATION_H

#include "ecu_bridge.h"
#include "HCR.h"

#ifdef __cplusplus
extern "C" {
#endif

void HCR_integration_init(void);
void HCR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRINTEGRATION_H */
