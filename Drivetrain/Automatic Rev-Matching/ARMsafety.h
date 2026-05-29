#ifndef ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMSAFETY_H
#define ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMSAFETY_H

#include "ARM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ARM_safety_check(const VehicleState* vs, const ARM_State* state);
void ARM_safety_enter_failsoft(ARM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMSAFETY_H */
