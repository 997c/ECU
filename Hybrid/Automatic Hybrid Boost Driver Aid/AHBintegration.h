#ifndef ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBINTEGRATION_H
#define ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBINTEGRATION_H

#include "ecu_bridge.h"
#include "AHB.h"

#ifdef __cplusplus
extern "C" {
#endif

void AHB_integration_init(void);
void AHB_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBINTEGRATION_H */
