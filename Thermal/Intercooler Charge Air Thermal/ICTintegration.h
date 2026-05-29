#ifndef ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTINTEGRATION_H
#define ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTINTEGRATION_H

#include "ecu_bridge.h"
#include "ICT.h"

#ifdef __cplusplus
extern "C" {
#endif

void ICT_integration_init(void);
void ICT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTINTEGRATION_H */
