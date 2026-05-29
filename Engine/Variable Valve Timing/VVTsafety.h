#ifndef ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTSAFETY_H
#define ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTSAFETY_H

#include "VVT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VVT_safety_check(const VehicleState* vs, const VVT_State* state);
void VVT_safety_enter_failsoft(VVT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTSAFETY_H */
