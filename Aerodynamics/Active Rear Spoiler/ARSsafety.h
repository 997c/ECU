#ifndef ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSSAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSSAFETY_H

#include "ARS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ARS_safety_check(const VehicleState* vs, const ARS_State* state);
void ARS_safety_enter_failsoft(ARS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSSAFETY_H */
