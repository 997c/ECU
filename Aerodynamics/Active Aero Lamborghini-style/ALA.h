#ifndef ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALA_H
#define ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ALA - Active Aero Lamborghini-style (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ALA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ALA_State;

void ALA_init(const ALA_Config* cfg);
void ALA_update(float dt_ms, const VehicleState* vs, ALA_State* state, ActuatorCommands* out);
void ALA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALA_H */
