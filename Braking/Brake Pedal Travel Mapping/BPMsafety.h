#ifndef ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMSAFETY_H
#define ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMSAFETY_H

#include "BPM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool BPM_safety_check(const VehicleState* vs, const BPM_State* state);
void BPM_safety_enter_failsoft(BPM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMSAFETY_H */
