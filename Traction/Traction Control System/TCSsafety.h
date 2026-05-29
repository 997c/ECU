#ifndef ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSSAFETY_H
#define ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSSAFETY_H

#include "TCS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TCS_safety_check(const VehicleState* vs, const TCS_State* state);
void TCS_safety_enter_failsoft(TCS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSSAFETY_H */
