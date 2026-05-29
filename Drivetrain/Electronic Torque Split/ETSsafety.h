#ifndef ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSSAFETY_H
#define ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSSAFETY_H

#include "ETS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ETS_safety_check(const VehicleState* vs, const ETS_State* state);
void ETS_safety_enter_failsoft(ETS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSSAFETY_H */
