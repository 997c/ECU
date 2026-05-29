#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFSAFETY_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFSAFETY_H

#include "ABF.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ABF_safety_check(const VehicleState* vs, const ABF_State* state);
void ABF_safety_enter_failsoft(ABF_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFSAFETY_H */
