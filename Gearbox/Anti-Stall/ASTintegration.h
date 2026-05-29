#ifndef ECU_GEARBOX_ANTI_STALL_ASTINTEGRATION_H
#define ECU_GEARBOX_ANTI_STALL_ASTINTEGRATION_H

#include "ecu_bridge.h"
#include "AST.h"

#ifdef __cplusplus
extern "C" {
#endif

void AST_integration_init(void);
void AST_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_ANTI_STALL_ASTINTEGRATION_H */
