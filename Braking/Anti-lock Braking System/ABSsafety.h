#ifndef ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSSAFETY_H
#define ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSSAFETY_H

#include "ABS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ABS_safety_check(const VehicleState* vs, const ABS_State* state);
void ABS_safety_enter_failsoft(ABS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSSAFETY_H */
