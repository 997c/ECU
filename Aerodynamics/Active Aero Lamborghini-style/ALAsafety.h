#ifndef ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALASAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALASAFETY_H

#include "ALA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ALA_safety_check(const VehicleState* vs, const ALA_State* state);
void ALA_safety_enter_failsoft(ALA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALASAFETY_H */
