#ifndef ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCSAFETY_H
#define ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCSAFETY_H

#include "RHC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool RHC_safety_check(const VehicleState* vs, const RHC_State* state);
void RHC_safety_enter_failsoft(RHC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCSAFETY_H */
