#ifndef ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMD_H
#define ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMD_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* YMD - Yaw Moment Demand (State_Estimation) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} YMD_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} YMD_State;

void YMD_init(const YMD_Config* cfg);
void YMD_update(float dt_ms, const VehicleState* vs, YMD_State* state, ActuatorCommands* out);
void YMD_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMD_H */
