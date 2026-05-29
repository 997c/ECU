#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHSAFETY_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHSAFETY_H

#include "ARH.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ARH_safety_check(const VehicleState* vs, const ARH_State* state);
void ARH_safety_enter_failsoft(ARH_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHSAFETY_H */
