#ifndef ECU_STEERING_ALL_WHEEL_STEERING_AWSSAFETY_H
#define ECU_STEERING_ALL_WHEEL_STEERING_AWSSAFETY_H

#include "AWS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AWS_safety_check(const VehicleState* vs, const AWS_State* state);
void AWS_safety_enter_failsoft(AWS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ALL_WHEEL_STEERING_AWSSAFETY_H */
