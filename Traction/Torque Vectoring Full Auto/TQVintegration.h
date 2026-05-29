#ifndef ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVINTEGRATION_H
#define ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVINTEGRATION_H

#include "ecu_bridge.h"
#include "TQV.h"

#ifdef __cplusplus
extern "C" {
#endif

void TQV_integration_init(void);
void TQV_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVINTEGRATION_H */
