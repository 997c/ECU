#ifndef ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWINTEGRATION_H
#define ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWINTEGRATION_H

#include "ecu_bridge.h"
#include "FDW.h"

#ifdef __cplusplus
extern "C" {
#endif

void FDW_integration_init(void);
void FDW_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWINTEGRATION_H */
