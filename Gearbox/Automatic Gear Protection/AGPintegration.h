#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPINTEGRATION_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPINTEGRATION_H

#include "ecu_bridge.h"
#include "AGP.h"

#ifdef __cplusplus
extern "C" {
#endif

void AGP_integration_init(void);
void AGP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPINTEGRATION_H */
