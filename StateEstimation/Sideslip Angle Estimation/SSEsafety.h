#ifndef ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSESAFETY_H
#define ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSESAFETY_H

#include "SSE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SSE_safety_check(const VehicleState* vs, const SSE_State* state);
void SSE_safety_enter_failsoft(SSE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSESAFETY_H */
