#ifndef ECU_STEERING_DUAL_AXIS_STEERING_DASSAFETY_H
#define ECU_STEERING_DUAL_AXIS_STEERING_DASSAFETY_H

#include "DAS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DAS_safety_check(const VehicleState* vs, const DAS_State* state);
void DAS_safety_enter_failsoft(DAS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_DUAL_AXIS_STEERING_DASSAFETY_H */
