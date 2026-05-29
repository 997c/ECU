#ifndef ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFSAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFSAFETY_H

#include "AWF.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AWF_safety_check(const VehicleState* vs, const AWF_State* state);
void AWF_safety_enter_failsoft(AWF_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFSAFETY_H */
