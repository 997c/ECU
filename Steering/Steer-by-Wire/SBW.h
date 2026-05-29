#ifndef ECU_STEERING_STEER_BY_WIRE_SBW_H
#define ECU_STEERING_STEER_BY_WIRE_SBW_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SBW - Steer-by-Wire (Steering) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SBW_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SBW_State;

void SBW_init(const SBW_Config* cfg);
void SBW_update(float dt_ms, const VehicleState* vs, SBW_State* state, ActuatorCommands* out);
void SBW_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_STEER_BY_WIRE_SBW_H */
