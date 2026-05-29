#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASSAFETY_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASSAFETY_H

#include "GAS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool GAS_safety_check(const VehicleState* vs, const GAS_State* state);
void GAS_safety_enter_failsoft(GAS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASSAFETY_H */
