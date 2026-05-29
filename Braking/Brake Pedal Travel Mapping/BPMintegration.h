#ifndef ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMINTEGRATION_H
#define ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMINTEGRATION_H

#include "ecu_bridge.h"
#include "BPM.h"

#ifdef __cplusplus
extern "C" {
#endif

void BPM_integration_init(void);
void BPM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMINTEGRATION_H */
