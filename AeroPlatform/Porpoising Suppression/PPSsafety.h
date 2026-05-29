#ifndef ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSSAFETY_H
#define ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSSAFETY_H

#include "PPS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool PPS_safety_check(const VehicleState* vs, const PPS_State* state);
void PPS_safety_enter_failsoft(PPS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSSAFETY_H */
