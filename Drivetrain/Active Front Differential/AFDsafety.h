#ifndef ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDSAFETY_H
#define ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDSAFETY_H

#include "AFD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AFD_safety_check(const VehicleState* vs, const AFD_State* state);
void AFD_safety_enter_failsoft(AFD_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDSAFETY_H */
