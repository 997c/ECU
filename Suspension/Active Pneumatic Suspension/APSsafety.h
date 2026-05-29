#ifndef ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSSAFETY_H
#define ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSSAFETY_H

#include "APS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool APS_safety_check(const VehicleState* vs, const APS_State* state);
void APS_safety_enter_failsoft(APS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSSAFETY_H */
