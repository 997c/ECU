#ifndef ECU_STEERING_STEER_BY_WIRE_SBWSAFETY_H
#define ECU_STEERING_STEER_BY_WIRE_SBWSAFETY_H

#include "SBW.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SBW_safety_check(const VehicleState* vs, const SBW_State* state);
void SBW_safety_enter_failsoft(SBW_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_STEER_BY_WIRE_SBWSAFETY_H */
