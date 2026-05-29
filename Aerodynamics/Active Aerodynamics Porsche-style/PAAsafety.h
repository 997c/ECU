#ifndef ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAASAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAASAFETY_H

#include "PAA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool PAA_safety_check(const VehicleState* vs, const PAA_State* state);
void PAA_safety_enter_failsoft(PAA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAASAFETY_H */
