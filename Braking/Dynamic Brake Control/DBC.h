#ifndef ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBC_H
#define ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DBC - Dynamic Brake Control (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DBC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DBC_State;

void DBC_init(const DBC_Config* cfg);
void DBC_update(float dt_ms, const VehicleState* vs, DBC_State* state, ActuatorCommands* out);
void DBC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBC_H */
