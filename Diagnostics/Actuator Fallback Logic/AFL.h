#ifndef ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFL_H
#define ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFL_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AFL - Actuator Fallback Logic (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AFL_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AFL_State;

void AFL_init(const AFL_Config* cfg);
void AFL_update(float dt_ms, const VehicleState* vs, AFL_State* state, ActuatorCommands* out);
void AFL_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFL_H */
