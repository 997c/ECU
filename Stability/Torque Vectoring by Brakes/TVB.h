#ifndef ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVB_H
#define ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVB_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TVB - Torque Vectoring by Brakes (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TVB_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TVB_State;

void TVB_init(const TVB_Config* cfg);
void TVB_update(float dt_ms, const VehicleState* vs, TVB_State* state, ActuatorCommands* out);
void TVB_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVB_H */
