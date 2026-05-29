#ifndef ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLE_H
#define ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* WLE - Wheel Load Estimation (State_Estimation) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} WLE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} WLE_State;

void WLE_init(const WLE_Config* cfg);
void WLE_update(float dt_ms, const VehicleState* vs, WLE_State* state, ActuatorCommands* out);
void WLE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLE_H */
