#ifndef ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGSAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGSAFETY_H

#include "ADG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ADG_safety_check(const VehicleState* vs, const ADG_State* state);
void ADG_safety_enter_failsoft(ADG_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGSAFETY_H */
