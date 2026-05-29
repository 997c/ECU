#ifndef ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAA_H
#define ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PAA - Active Aerodynamics Porsche-style (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} PAA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} PAA_State;

void PAA_init(const PAA_Config* cfg);
void PAA_update(float dt_ms, const VehicleState* vs, PAA_State* state, ActuatorCommands* out);
void PAA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAA_H */
