#ifndef ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLINTEGRATION_H
#define ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLINTEGRATION_H

#include "ecu_bridge.h"
#include "AFL.h"

#ifdef __cplusplus
extern "C" {
#endif

void AFL_integration_init(void);
void AFL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLINTEGRATION_H */
