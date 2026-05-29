#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2SAFETY_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2SAFETY_H

#include "ARH2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ARH2_safety_check(const VehicleState* vs, const ARH2_State* state);
void ARH2_safety_enter_failsoft(ARH2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2SAFETY_H */
