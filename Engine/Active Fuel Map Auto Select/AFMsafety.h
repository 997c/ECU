#ifndef ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMSAFETY_H
#define ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMSAFETY_H

#include "AFM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AFM_safety_check(const VehicleState* vs, const AFM_State* state);
void AFM_safety_enter_failsoft(AFM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMSAFETY_H */
