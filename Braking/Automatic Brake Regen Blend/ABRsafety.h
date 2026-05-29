#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRSAFETY_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRSAFETY_H

#include "ABR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ABR_safety_check(const VehicleState* vs, const ABR_State* state);
void ABR_safety_enter_failsoft(ABR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRSAFETY_H */
