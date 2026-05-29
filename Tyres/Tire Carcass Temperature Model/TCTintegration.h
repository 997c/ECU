#ifndef ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTINTEGRATION_H
#define ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTINTEGRATION_H

#include "ecu_bridge.h"
#include "TCT.h"

#ifdef __cplusplus
extern "C" {
#endif

void TCT_integration_init(void);
void TCT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTINTEGRATION_H */
