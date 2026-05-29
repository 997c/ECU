#ifndef ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTSAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTSAFETY_H

#include "AFT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AFT_safety_check(const VehicleState* vs, const AFT_State* state);
void AFT_safety_enter_failsoft(AFT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTSAFETY_H */
