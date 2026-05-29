#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2SAFETY_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2SAFETY_H

#include "AGS2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AGS2_safety_check(const VehicleState* vs, const AGS2_State* state);
void AGS2_safety_enter_failsoft(AGS2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2SAFETY_H */
