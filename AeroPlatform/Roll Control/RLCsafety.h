#ifndef ECU_AERO_PLATFORM_ROLL_CONTROL_RLCSAFETY_H
#define ECU_AERO_PLATFORM_ROLL_CONTROL_RLCSAFETY_H

#include "RLC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool RLC_safety_check(const VehicleState* vs, const RLC_State* state);
void RLC_safety_enter_failsoft(RLC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ROLL_CONTROL_RLCSAFETY_H */
