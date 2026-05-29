#ifndef ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTSAFETY_H
#define ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTSAFETY_H

#include "ACT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ACT_safety_check(const VehicleState* vs, const ACT_State* state);
void ACT_safety_enter_failsoft(ACT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTSAFETY_H */
