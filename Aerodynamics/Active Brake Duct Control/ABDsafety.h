#ifndef ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDSAFETY_H
#define ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDSAFETY_H

#include "ABD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ABD_safety_check(const VehicleState* vs, const ABD_State* state);
void ABD_safety_enter_failsoft(ABD_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDSAFETY_H */
