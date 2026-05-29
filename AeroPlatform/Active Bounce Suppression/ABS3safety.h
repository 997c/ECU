#ifndef ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3SAFETY_H
#define ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3SAFETY_H

#include "ABS3.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ABS3_safety_check(const VehicleState* vs, const ABS3_State* state);
void ABS3_safety_enter_failsoft(ABS3_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3SAFETY_H */
