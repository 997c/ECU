#ifndef ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPS_H
#define ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EPS - Electronic Power Steering Auto (Steering) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EPS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EPS_State;

void EPS_init(const EPS_Config* cfg);
void EPS_update(float dt_ms, const VehicleState* vs, EPS_State* state, ActuatorCommands* out);
void EPS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPS_H */
