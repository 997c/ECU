#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GES_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GES_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GES - Ground Effect Sliding Skirts (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} GES_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} GES_State;

void GES_init(const GES_Config* cfg);
void GES_update(float dt_ms, const VehicleState* vs, GES_State* state, ActuatorCommands* out);
void GES_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GES_H */
