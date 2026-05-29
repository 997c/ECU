#ifndef ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHE_H
#define ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RHE - Ride Height Estimation (State_Estimation) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} RHE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} RHE_State;

void RHE_init(const RHE_Config* cfg);
void RHE_update(float dt_ms, const VehicleState* vs, RHE_State* state, ActuatorCommands* out);
void RHE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHE_H */
