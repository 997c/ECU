#ifndef ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMINTEGRATION_H
#define ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMINTEGRATION_H

#include "ecu_bridge.h"
#include "XDM.h"

#ifdef __cplusplus
extern "C" {
#endif

void XDM_integration_init(void);
void XDM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMINTEGRATION_H */
