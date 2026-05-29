#ifndef ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSD_H
#define ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSD_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BSD - Brake Steer Differential Braking (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} BSD_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} BSD_State;

void BSD_init(const BSD_Config* cfg);
void BSD_update(float dt_ms, const VehicleState* vs, BSD_State* state, ActuatorCommands* out);
void BSD_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSD_H */
