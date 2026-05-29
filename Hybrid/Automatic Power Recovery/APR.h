#ifndef ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APR_H
#define ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* APR - Automatic Power Recovery (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} APR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} APR_State;

void APR_init(const APR_Config* cfg);
void APR_update(float dt_ms, const VehicleState* vs, APR_State* state, ActuatorCommands* out);
void APR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APR_H */
