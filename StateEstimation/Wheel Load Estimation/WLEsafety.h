#ifndef ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLESAFETY_H
#define ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLESAFETY_H

#include "WLE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool WLE_safety_check(const VehicleState* vs, const WLE_State* state);
void WLE_safety_enter_failsoft(WLE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLESAFETY_H */
