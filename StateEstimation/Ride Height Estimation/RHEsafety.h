#ifndef ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHESAFETY_H
#define ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHESAFETY_H

#include "RHE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool RHE_safety_check(const VehicleState* vs, const RHE_State* state);
void RHE_safety_enter_failsoft(RHE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHESAFETY_H */
