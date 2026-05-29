#ifndef ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2_H
#define ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ARS2 - Automatic Regen Switching (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ARS2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ARS2_State;

void ARS2_init(const ARS2_Config* cfg);
void ARS2_update(float dt_ms, const VehicleState* vs, ARS2_State* state, ActuatorCommands* out);
void ARS2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2_H */
