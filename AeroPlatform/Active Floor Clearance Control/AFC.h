#ifndef ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFC_H
#define ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AFC - Active Floor Clearance Control (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AFC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AFC_State;

void AFC_init(const AFC_Config* cfg);
void AFC_update(float dt_ms, const VehicleState* vs, AFC_State* state, ActuatorCommands* out);
void AFC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFC_H */
