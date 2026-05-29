#ifndef ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSINTEGRATION_H
#define ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSINTEGRATION_H

#include "ecu_bridge.h"
#include "OGS.h"

#ifdef __cplusplus
extern "C" {
#endif

void OGS_integration_init(void);
void OGS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSINTEGRATION_H */
