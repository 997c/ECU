#ifndef ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSSAFETY_H
#define ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSSAFETY_H

#include "FCS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool FCS_safety_check(const VehicleState* vs, const FCS_State* state);
void FCS_safety_enter_failsoft(FCS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSSAFETY_H */
