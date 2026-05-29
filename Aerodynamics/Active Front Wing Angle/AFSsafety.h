#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSSAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSSAFETY_H

#include "AFS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AFS_safety_check(const VehicleState* vs, const AFS_State* state);
void AFS_safety_enter_failsoft(AFS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSSAFETY_H */
