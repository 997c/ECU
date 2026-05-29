#ifndef ECU_ENGINE_FUEL_INJECTION_CONTROL_FICINTEGRATION_H
#define ECU_ENGINE_FUEL_INJECTION_CONTROL_FICINTEGRATION_H

#include "ecu_bridge.h"
#include "FIC.h"

#ifdef __cplusplus
extern "C" {
#endif

void FIC_integration_init(void);
void FIC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_INJECTION_CONTROL_FICINTEGRATION_H */
