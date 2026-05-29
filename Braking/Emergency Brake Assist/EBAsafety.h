#ifndef ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBASAFETY_H
#define ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBASAFETY_H

#include "EBA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EBA_safety_check(const VehicleState* vs, const EBA_State* state);
void EBA_safety_enter_failsoft(EBA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBASAFETY_H */
