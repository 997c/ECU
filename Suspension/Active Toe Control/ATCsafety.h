#ifndef ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCSAFETY_H
#define ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCSAFETY_H

#include "ATC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ATC_safety_check(const VehicleState* vs, const ATC_State* state);
void ATC_safety_enter_failsoft(ATC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCSAFETY_H */
