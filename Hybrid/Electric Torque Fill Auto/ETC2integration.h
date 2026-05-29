#ifndef ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2INTEGRATION_H
#define ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2INTEGRATION_H

#include "ecu_bridge.h"
#include "ETC2.h"

#ifdef __cplusplus
extern "C" {
#endif

void ETC2_integration_init(void);
void ETC2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2INTEGRATION_H */
