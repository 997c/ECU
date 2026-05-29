#ifndef ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBC_H
#define ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CBC - Cornering Brake Control (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} CBC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} CBC_State;

void CBC_init(const CBC_Config* cfg);
void CBC_update(float dt_ms, const VehicleState* vs, CBC_State* state, ActuatorCommands* out);
void CBC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBC_H */
