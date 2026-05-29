#ifndef ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDSAFETY_H
#define ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDSAFETY_H

#include "BLD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool BLD_safety_check(const VehicleState* vs, const BLD_State* state);
void BLD_safety_enter_failsoft(BLD_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDSAFETY_H */
