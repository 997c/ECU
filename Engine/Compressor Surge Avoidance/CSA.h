#ifndef ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSA_H
#define ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CSA - Compressor Surge Avoidance (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} CSA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} CSA_State;

void CSA_init(const CSA_Config* cfg);
void CSA_update(float dt_ms, const VehicleState* vs, CSA_State* state, ActuatorCommands* out);
void CSA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSA_H */
