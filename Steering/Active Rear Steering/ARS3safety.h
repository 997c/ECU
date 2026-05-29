#ifndef ECU_STEERING_ACTIVE_REAR_STEERING_ARS3SAFETY_H
#define ECU_STEERING_ACTIVE_REAR_STEERING_ARS3SAFETY_H

#include "ARS3.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ARS3_safety_check(const VehicleState* vs, const ARS3_State* state);
void ARS3_safety_enter_failsoft(ARS3_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_REAR_STEERING_ARS3SAFETY_H */
