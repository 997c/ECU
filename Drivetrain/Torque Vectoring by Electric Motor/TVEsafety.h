#ifndef ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVESAFETY_H
#define ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVESAFETY_H

#include "TVE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TVE_safety_check(const VehicleState* vs, const TVE_State* state);
void TVE_safety_enter_failsoft(TVE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVESAFETY_H */
