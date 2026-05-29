#ifndef ECU_ENGINE_TORQUE_SHAPING_TQSINTEGRATION_H
#define ECU_ENGINE_TORQUE_SHAPING_TQSINTEGRATION_H

#include "ecu_bridge.h"
#include "TQS.h"

#ifdef __cplusplus
extern "C" {
#endif

void TQS_integration_init(void);
void TQS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TORQUE_SHAPING_TQSINTEGRATION_H */
