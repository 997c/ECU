#ifndef ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBA_H
#define ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EBA - Emergency Brake Assist (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EBA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EBA_State;

void EBA_init(const EBA_Config* cfg);
void EBA_update(float dt_ms, const VehicleState* vs, EBA_State* state, ActuatorCommands* out);
void EBA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBA_H */
