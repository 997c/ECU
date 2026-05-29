#ifndef ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTINTEGRATION_H
#define ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTINTEGRATION_H

#include "ecu_bridge.h"
#include "DCT.h"

#ifdef __cplusplus
extern "C" {
#endif

void DCT_integration_init(void);
void DCT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTINTEGRATION_H */
