#ifndef ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDSAFETY_H
#define ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDSAFETY_H

#include "YMD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool YMD_safety_check(const VehicleState* vs, const YMD_State* state);
void YMD_safety_enter_failsoft(YMD_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDSAFETY_H */
