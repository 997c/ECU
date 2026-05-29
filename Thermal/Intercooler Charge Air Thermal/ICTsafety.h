#ifndef ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTSAFETY_H
#define ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTSAFETY_H

#include "ICT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ICT_safety_check(const VehicleState* vs, const ICT_State* state);
void ICT_safety_enter_failsoft(ICT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTSAFETY_H */
