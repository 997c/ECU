#ifndef ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSSAFETY_H
#define ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSSAFETY_H

#include "PLS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool PLS_safety_check(const VehicleState* vs, const PLS_State* state);
void PLS_safety_enter_failsoft(PLS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSSAFETY_H */
