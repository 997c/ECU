#ifndef ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2INTEGRATION_H
#define ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2INTEGRATION_H

#include "ecu_bridge.h"
#include "EBD2.h"

#ifdef __cplusplus
extern "C" {
#endif

void EBD2_integration_init(void);
void EBD2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2INTEGRATION_H */
