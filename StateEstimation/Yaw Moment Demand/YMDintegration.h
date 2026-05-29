#ifndef ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDINTEGRATION_H
#define ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDINTEGRATION_H

#include "ecu_bridge.h"
#include "YMD.h"

#ifdef __cplusplus
extern "C" {
#endif

void YMD_integration_init(void);
void YMD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDINTEGRATION_H */
