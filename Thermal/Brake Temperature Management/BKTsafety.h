#ifndef ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTSAFETY_H
#define ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTSAFETY_H

#include "BKT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool BKT_safety_check(const VehicleState* vs, const BKT_State* state);
void BKT_safety_enter_failsoft(BKT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTSAFETY_H */
