#ifndef ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVS_H
#define ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DVS - Deployment Strategy Control (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DVS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DVS_State;

void DVS_init(const DVS_Config* cfg);
void DVS_update(float dt_ms, const VehicleState* vs, DVS_State* state, ActuatorCommands* out);
void DVS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVS_H */
