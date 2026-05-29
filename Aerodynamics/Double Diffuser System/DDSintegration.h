#ifndef ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSINTEGRATION_H
#define ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSINTEGRATION_H

#include "ecu_bridge.h"
#include "DDS.h"

#ifdef __cplusplus
extern "C" {
#endif

void DDS_integration_init(void);
void DDS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSINTEGRATION_H */
