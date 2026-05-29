#ifndef ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTSAFETY_H
#define ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTSAFETY_H

#include "AVT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AVT_safety_check(const VehicleState* vs, const AVT_State* state);
void AVT_safety_enter_failsoft(AVT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTSAFETY_H */
