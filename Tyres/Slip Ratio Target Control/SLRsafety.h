#ifndef ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRSAFETY_H
#define ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRSAFETY_H

#include "SLR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SLR_safety_check(const VehicleState* vs, const SLR_State* state);
void SLR_safety_enter_failsoft(SLR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRSAFETY_H */
