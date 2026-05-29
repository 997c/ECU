#ifndef ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSC_H
#define ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DSC - Dynamic Stability Control (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DSC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DSC_State;

void DSC_init(const DSC_Config* cfg);
void DSC_update(float dt_ms, const VehicleState* vs, DSC_State* state, ActuatorCommands* out);
void DSC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSC_H */
