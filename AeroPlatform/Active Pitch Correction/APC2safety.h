#ifndef ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2SAFETY_H
#define ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2SAFETY_H

#include "APC2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool APC2_safety_check(const VehicleState* vs, const APC2_State* state);
void APC2_safety_enter_failsoft(APC2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2SAFETY_H */
