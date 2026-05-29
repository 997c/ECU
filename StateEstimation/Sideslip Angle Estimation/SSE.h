#ifndef ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSE_H
#define ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SSE - Sideslip Angle Estimation (State_Estimation) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SSE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SSE_State;

void SSE_init(const SSE_Config* cfg);
void SSE_update(float dt_ms, const VehicleState* vs, SSE_State* state, ActuatorCommands* out);
void SSE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSE_H */
