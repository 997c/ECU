#ifndef ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCSAFETY_H
#define ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCSAFETY_H

#include "ABC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ABC_safety_check(const VehicleState* vs, const ABC_State* state);
void ABC_safety_enter_failsoft(ABC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCSAFETY_H */
