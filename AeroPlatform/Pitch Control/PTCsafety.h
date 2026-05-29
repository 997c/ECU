#ifndef ECU_AERO_PLATFORM_PITCH_CONTROL_PTCSAFETY_H
#define ECU_AERO_PLATFORM_PITCH_CONTROL_PTCSAFETY_H

#include "PTC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool PTC_safety_check(const VehicleState* vs, const PTC_State* state);
void PTC_safety_enter_failsoft(PTC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PITCH_CONTROL_PTCSAFETY_H */
