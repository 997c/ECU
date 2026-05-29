#ifndef ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCINTEGRATION_H
#define ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCINTEGRATION_H

#include "ecu_bridge.h"
#include "ITC.h"

#ifdef __cplusplus
extern "C" {
#endif

void ITC_integration_init(void);
void ITC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCINTEGRATION_H */
