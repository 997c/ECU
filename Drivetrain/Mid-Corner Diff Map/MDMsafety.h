#ifndef ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMSAFETY_H
#define ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMSAFETY_H

#include "MDM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool MDM_safety_check(const VehicleState* vs, const MDM_State* state);
void MDM_safety_enter_failsoft(MDM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMSAFETY_H */
