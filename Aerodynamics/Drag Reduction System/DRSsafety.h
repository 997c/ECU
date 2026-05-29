#ifndef ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSSAFETY_H
#define ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSSAFETY_H

#include "DRS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DRS_safety_check(const VehicleState* vs, const DRS_State* state);
void DRS_safety_enter_failsoft(DRS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSSAFETY_H */
