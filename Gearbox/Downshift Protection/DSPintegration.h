#ifndef ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPINTEGRATION_H
#define ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPINTEGRATION_H

#include "ecu_bridge.h"
#include "DSP.h"

#ifdef __cplusplus
extern "C" {
#endif

void DSP_integration_init(void);
void DSP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPINTEGRATION_H */
