#ifndef ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALE_H
#define ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ALE - Aero Load Estimation (State_Estimation) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ALE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ALE_State;

void ALE_init(const ALE_Config* cfg);
void ALE_update(float dt_ms, const VehicleState* vs, ALE_State* state, ActuatorCommands* out);
void ALE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALE_H */
