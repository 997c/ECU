#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPSAFETY_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPSAFETY_H

#include "ABP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ABP_safety_check(const VehicleState* vs, const ABP_State* state);
void ABP_safety_enter_failsoft(ABP_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPSAFETY_H */
