#ifndef ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSINTEGRATION_H
#define ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSINTEGRATION_H

#include "ecu_bridge.h"
#include "PPS.h"

#ifdef __cplusplus
extern "C" {
#endif

void PPS_integration_init(void);
void PPS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSINTEGRATION_H */
