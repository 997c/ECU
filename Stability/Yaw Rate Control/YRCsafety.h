#ifndef ECU_STABILITY_YAW_RATE_CONTROL_YRCSAFETY_H
#define ECU_STABILITY_YAW_RATE_CONTROL_YRCSAFETY_H

#include "YRC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool YRC_safety_check(const VehicleState* vs, const YRC_State* state);
void YRC_safety_enter_failsoft(YRC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_YAW_RATE_CONTROL_YRCSAFETY_H */
