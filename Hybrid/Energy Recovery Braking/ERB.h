#ifndef ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERB_H
#define ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERB_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ERB - Energy Recovery Braking (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ERB_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ERB_State;

void ERB_init(const ERB_Config* cfg);
void ERB_update(float dt_ms, const VehicleState* vs, ERB_State* state, ActuatorCommands* out);
void ERB_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERB_H */
