#ifndef ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARSAFETY_H
#define ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARSAFETY_H

#include "AAR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AAR_safety_check(const VehicleState* vs, const AAR_State* state);
void AAR_safety_enter_failsoft(AAR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARSAFETY_H */
