#ifndef ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISINTEGRATION_H
#define ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISINTEGRATION_H

#include "ecu_bridge.h"
#include "HIS.h"

#ifdef __cplusplus
extern "C" {
#endif

void HIS_integration_init(void);
void HIS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISINTEGRATION_H */
