#ifndef ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCSAFETY_H
#define ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCSAFETY_H

#include "AFC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AFC_safety_check(const VehicleState* vs, const AFC_State* state);
void AFC_safety_enter_failsoft(AFC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCSAFETY_H */
