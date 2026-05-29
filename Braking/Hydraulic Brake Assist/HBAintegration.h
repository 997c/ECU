#ifndef ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBAINTEGRATION_H
#define ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBAINTEGRATION_H

#include "ecu_bridge.h"
#include "HBA.h"

#ifdef __cplusplus
extern "C" {
#endif

void HBA_integration_init(void);
void HBA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBAINTEGRATION_H */
