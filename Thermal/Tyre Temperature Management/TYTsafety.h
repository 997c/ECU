#ifndef ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTSAFETY_H
#define ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTSAFETY_H

#include "TYT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TYT_safety_check(const VehicleState* vs, const TYT_State* state);
void TYT_safety_enter_failsoft(TYT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTSAFETY_H */
