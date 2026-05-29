#ifndef ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABASAFETY_H
#define ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABASAFETY_H

#include "ABA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ABA_safety_check(const VehicleState* vs, const ABA_State* state);
void ABA_safety_enter_failsoft(ABA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABASAFETY_H */
