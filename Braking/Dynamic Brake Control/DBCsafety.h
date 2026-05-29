#ifndef ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCSAFETY_H
#define ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCSAFETY_H

#include "DBC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DBC_safety_check(const VehicleState* vs, const DBC_State* state);
void DBC_safety_enter_failsoft(DBC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCSAFETY_H */
