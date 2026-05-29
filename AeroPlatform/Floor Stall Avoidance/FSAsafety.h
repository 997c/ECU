#ifndef ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSASAFETY_H
#define ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSASAFETY_H

#include "FSA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool FSA_safety_check(const VehicleState* vs, const FSA_State* state);
void FSA_safety_enter_failsoft(FSA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSASAFETY_H */
