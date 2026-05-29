#ifndef ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLS_H
#define ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PLS - Pit Lane Speed Limiter (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} PLS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} PLS_State;

void PLS_init(const PLS_Config* cfg);
void PLS_update(float dt_ms, const VehicleState* vs, PLS_State* state, ActuatorCommands* out);
void PLS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLS_H */
