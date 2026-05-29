#ifndef ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAAINTEGRATION_H
#define ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAAINTEGRATION_H

#include "ecu_bridge.h"
#include "PAA.h"

#ifdef __cplusplus
extern "C" {
#endif

void PAA_integration_init(void);
void PAA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAAINTEGRATION_H */
