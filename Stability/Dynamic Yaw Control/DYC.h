#ifndef ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYC_H
#define ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DYC - Dynamic Yaw Control (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DYC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DYC_State;

void DYC_init(const DYC_Config* cfg);
void DYC_update(float dt_ms, const VehicleState* vs, DYC_State* state, ActuatorCommands* out);
void DYC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYC_H */
