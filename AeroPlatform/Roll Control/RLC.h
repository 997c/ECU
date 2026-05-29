#ifndef ECU_AERO_PLATFORM_ROLL_CONTROL_RLC_H
#define ECU_AERO_PLATFORM_ROLL_CONTROL_RLC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RLC - Roll Control (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} RLC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} RLC_State;

void RLC_init(const RLC_Config* cfg);
void RLC_update(float dt_ms, const VehicleState* vs, RLC_State* state, ActuatorCommands* out);
void RLC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ROLL_CONTROL_RLC_H */
