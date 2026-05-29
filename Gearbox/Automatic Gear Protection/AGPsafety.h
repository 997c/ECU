#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPSAFETY_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPSAFETY_H

#include "AGP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AGP_safety_check(const VehicleState* vs, const AGP_State* state);
void AGP_safety_enter_failsoft(AGP_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPSAFETY_H */
