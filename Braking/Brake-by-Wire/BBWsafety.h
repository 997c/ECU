#ifndef ECU_BRAKING_BRAKE_BY_WIRE_BBWSAFETY_H
#define ECU_BRAKING_BRAKE_BY_WIRE_BBWSAFETY_H

#include "BBW.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool BBW_safety_check(const VehicleState* vs, const BBW_State* state);
void BBW_safety_enter_failsoft(BBW_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_BY_WIRE_BBWSAFETY_H */
