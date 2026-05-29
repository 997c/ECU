#ifndef ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSE_H
#define ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VSE - Vehicle Speed Estimation (State_Estimation) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VSE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VSE_State;

void VSE_init(const VSE_Config* cfg);
void VSE_update(float dt_ms, const VehicleState* vs, VSE_State* state, ActuatorCommands* out);
void VSE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSE_H */
