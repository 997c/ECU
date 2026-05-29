#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2INTEGRATION_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2INTEGRATION_H

#include "ecu_bridge.h"
#include "AGS2.h"

#ifdef __cplusplus
extern "C" {
#endif

void AGS2_integration_init(void);
void AGS2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2INTEGRATION_H */
