#ifndef ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCINTEGRATION_H
#define ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCINTEGRATION_H

#include "ecu_bridge.h"
#include "LSC.h"

#ifdef __cplusplus
extern "C" {
#endif

void LSC_integration_init(void);
void LSC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCINTEGRATION_H */
