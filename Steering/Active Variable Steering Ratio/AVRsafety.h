#ifndef ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRSAFETY_H
#define ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRSAFETY_H

#include "AVR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AVR_safety_check(const VehicleState* vs, const AVR_State* state);
void AVR_safety_enter_failsoft(AVR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRSAFETY_H */
