#ifndef ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTINTEGRATION_H
#define ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTINTEGRATION_H

#include "ecu_bridge.h"
#include "CVT.h"

#ifdef __cplusplus
extern "C" {
#endif

void CVT_integration_init(void);
void CVT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTINTEGRATION_H */
