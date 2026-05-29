#ifndef ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMSAFETY_H
#define ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMSAFETY_H

#include "EDM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EDM_safety_check(const VehicleState* vs, const EDM_State* state);
void EDM_safety_enter_failsoft(EDM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMSAFETY_H */
