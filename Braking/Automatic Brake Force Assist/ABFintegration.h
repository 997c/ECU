#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFINTEGRATION_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFINTEGRATION_H

#include "ecu_bridge.h"
#include "ABF.h"

#ifdef __cplusplus
extern "C" {
#endif

void ABF_integration_init(void);
void ABF_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFINTEGRATION_H */
