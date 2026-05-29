#ifndef ECU_REGISTRY_H
#define ECU_REGISTRY_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

void ecu_registry_init_all(void);
void ecu_registry_update_all(float dt_ms, const VehicleState* vs, ActuatorCommands* out);
void ecu_registry_shutdown_all(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_REGISTRY_H */
