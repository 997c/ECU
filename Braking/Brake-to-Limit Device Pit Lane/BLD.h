#ifndef ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLD_H
#define ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLD_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BLD - Brake-to-Limit Device Pit Lane (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} BLD_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} BLD_State;

void BLD_init(const BLD_Config* cfg);
void BLD_update(float dt_ms, const VehicleState* vs, BLD_State* state, ActuatorCommands* out);
void BLD_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLD_H */
