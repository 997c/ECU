#ifndef ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCSAFETY_H
#define ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCSAFETY_H

#include "ARC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ARC_safety_check(const VehicleState* vs, const ARC_State* state);
void ARC_safety_enter_failsoft(ARC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCSAFETY_H */
