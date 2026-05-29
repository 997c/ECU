#ifndef ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3SAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3SAFETY_H

#include "ADS3.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ADS3_safety_check(const VehicleState* vs, const ADS3_State* state);
void ADS3_safety_enter_failsoft(ADS3_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3SAFETY_H */
