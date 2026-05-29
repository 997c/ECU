#ifndef ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCSAFETY_H
#define ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCSAFETY_H

#include "CBC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool CBC_safety_check(const VehicleState* vs, const CBC_State* state);
void CBC_safety_enter_failsoft(CBC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCSAFETY_H */
