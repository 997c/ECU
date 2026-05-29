#ifndef ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCSAFETY_H
#define ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCSAFETY_H

#include "DTC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DTC_safety_check(const VehicleState* vs, const DTC_State* state);
void DTC_safety_enter_failsoft(DTC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCSAFETY_H */
