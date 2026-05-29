#ifndef ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4SAFETY_H
#define ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4SAFETY_H

#include "ADS4.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ADS4_safety_check(const VehicleState* vs, const ADS4_State* state);
void ADS4_safety_enter_failsoft(ADS4_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4SAFETY_H */
