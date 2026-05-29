#ifndef ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCINTEGRATION_H
#define ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCINTEGRATION_H

#include "ecu_bridge.h"
#include "SCC.h"

#ifdef __cplusplus
extern "C" {
#endif

void SCC_integration_init(void);
void SCC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCINTEGRATION_H */
