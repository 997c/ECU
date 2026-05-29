#ifndef ECU_AERO_PLATFORM_PITCH_CONTROL_PTCINTEGRATION_H
#define ECU_AERO_PLATFORM_PITCH_CONTROL_PTCINTEGRATION_H

#include "ecu_bridge.h"
#include "PTC.h"

#ifdef __cplusplus
extern "C" {
#endif

void PTC_integration_init(void);
void PTC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PITCH_CONTROL_PTCINTEGRATION_H */
