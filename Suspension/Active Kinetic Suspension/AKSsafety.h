#ifndef ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSSAFETY_H
#define ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSSAFETY_H

#include "AKS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AKS_safety_check(const VehicleState* vs, const AKS_State* state);
void AKS_safety_enter_failsoft(AKS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSSAFETY_H */
