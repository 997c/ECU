#ifndef ECU_DRIVETRAIN_LAUNCH_CONTROL_LCSAFETY_H
#define ECU_DRIVETRAIN_LAUNCH_CONTROL_LCSAFETY_H

#include "LC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool LC_safety_check(const VehicleState* vs, const LC_State* state);
void LC_safety_enter_failsoft(LC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_LAUNCH_CONTROL_LCSAFETY_H */
