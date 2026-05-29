#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2SAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2SAFETY_H

#include "AFS2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AFS2_safety_check(const VehicleState* vs, const AFS2_State* state);
void AFS2_safety_enter_failsoft(AFS2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2SAFETY_H */
