#ifndef ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSINTEGRATION_H
#define ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSINTEGRATION_H

#include "ecu_bridge.h"
#include "SHS.h"

#ifdef __cplusplus
extern "C" {
#endif

void SHS_integration_init(void);
void SHS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSINTEGRATION_H */
