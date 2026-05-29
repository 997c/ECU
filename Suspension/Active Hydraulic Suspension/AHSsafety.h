#ifndef ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSSAFETY_H
#define ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSSAFETY_H

#include "AHS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AHS_safety_check(const VehicleState* vs, const AHS_State* state);
void AHS_safety_enter_failsoft(AHS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSSAFETY_H */
