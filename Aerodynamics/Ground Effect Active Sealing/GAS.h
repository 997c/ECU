#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GAS_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GAS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GAS - Ground Effect Active Sealing (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} GAS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} GAS_State;

void GAS_init(const GAS_Config* cfg);
void GAS_update(float dt_ms, const VehicleState* vs, GAS_State* state, ActuatorCommands* out);
void GAS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GAS_H */
