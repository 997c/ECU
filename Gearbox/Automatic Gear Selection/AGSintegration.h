#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSINTEGRATION_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSINTEGRATION_H

#include "ecu_bridge.h"
#include "AGS.h"

#ifdef __cplusplus
extern "C" {
#endif

void AGS_integration_init(void);
void AGS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSINTEGRATION_H */
