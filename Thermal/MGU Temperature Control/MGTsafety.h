#ifndef ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTSAFETY_H
#define ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTSAFETY_H

#include "MGT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool MGT_safety_check(const VehicleState* vs, const MGT_State* state);
void MGT_safety_enter_failsoft(MGT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTSAFETY_H */
