#ifndef ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDSAFETY_H
#define ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDSAFETY_H

#include "ARD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ARD_safety_check(const VehicleState* vs, const ARD_State* state);
void ARD_safety_enter_failsoft(ARD_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDSAFETY_H */
