#ifndef ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTSAFETY_H
#define ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTSAFETY_H

#include "RBT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool RBT_safety_check(const VehicleState* vs, const RBT_State* state);
void RBT_safety_enter_failsoft(RBT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTSAFETY_H */
