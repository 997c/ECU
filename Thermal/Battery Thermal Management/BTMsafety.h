#ifndef ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMSAFETY_H
#define ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMSAFETY_H

#include "BTM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool BTM_safety_check(const VehicleState* vs, const BTM_State* state);
void BTM_safety_enter_failsoft(BTM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMSAFETY_H */
