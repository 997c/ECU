#ifndef ECU_STABILITY_YAW_RATE_CONTROL_YRC_H
#define ECU_STABILITY_YAW_RATE_CONTROL_YRC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* YRC - Yaw Rate Control (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} YRC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} YRC_State;

void YRC_init(const YRC_Config* cfg);
void YRC_update(float dt_ms, const VehicleState* vs, YRC_State* state, ActuatorCommands* out);
void YRC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_YAW_RATE_CONTROL_YRC_H */
