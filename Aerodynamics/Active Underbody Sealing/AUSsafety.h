#ifndef ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSSAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSSAFETY_H

#include "AUS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AUS_safety_check(const VehicleState* vs, const AUS_State* state);
void AUS_safety_enter_failsoft(AUS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSSAFETY_H */
