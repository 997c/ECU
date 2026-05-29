#ifndef ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFE_H
#define ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TFE - Tire Friction Estimation (State_Estimation) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TFE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TFE_State;

void TFE_init(const TFE_Config* cfg);
void TFE_update(float dt_ms, const VehicleState* vs, TFE_State* state, ActuatorCommands* out);
void TFE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFE_H */
