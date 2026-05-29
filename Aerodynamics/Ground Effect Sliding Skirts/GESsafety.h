#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESSAFETY_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESSAFETY_H

#include "GES.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool GES_safety_check(const VehicleState* vs, const GES_State* state);
void GES_safety_enter_failsoft(GES_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESSAFETY_H */
