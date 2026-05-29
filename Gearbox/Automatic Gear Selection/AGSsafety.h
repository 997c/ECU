#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSSAFETY_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSSAFETY_H

#include "AGS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AGS_safety_check(const VehicleState* vs, const AGS_State* state);
void AGS_safety_enter_failsoft(AGS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSSAFETY_H */
