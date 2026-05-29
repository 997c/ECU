#ifndef ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLSAFETY_H
#define ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLSAFETY_H

#include "VVL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VVL_safety_check(const VehicleState* vs, const VVL_State* state);
void VVL_safety_enter_failsoft(VVL_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLSAFETY_H */
