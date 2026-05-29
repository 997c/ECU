#ifndef ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPINTEGRATION_H
#define ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPINTEGRATION_H

#include "ecu_bridge.h"
#include "LMP.h"

#ifdef __cplusplus
extern "C" {
#endif

void LMP_integration_init(void);
void LMP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPINTEGRATION_H */
