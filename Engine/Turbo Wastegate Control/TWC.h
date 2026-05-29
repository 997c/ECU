#ifndef ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWC_H
#define ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TWC - Turbo Wastegate Control (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TWC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TWC_State;

void TWC_init(const TWC_Config* cfg);
void TWC_update(float dt_ms, const VehicleState* vs, TWC_State* state, ActuatorCommands* out);
void TWC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWC_H */
