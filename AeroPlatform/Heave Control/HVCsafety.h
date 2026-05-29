#ifndef ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCSAFETY_H
#define ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCSAFETY_H

#include "HVC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool HVC_safety_check(const VehicleState* vs, const HVC_State* state);
void HVC_safety_enter_failsoft(HVC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCSAFETY_H */
