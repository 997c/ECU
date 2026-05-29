#ifndef ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSSAFETY_H
#define ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSSAFETY_H

#include "ASS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ASS_safety_check(const VehicleState* vs, const ASS_State* state);
void ASS_safety_enter_failsoft(ASS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSSAFETY_H */
