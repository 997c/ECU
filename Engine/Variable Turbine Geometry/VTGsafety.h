#ifndef ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGSAFETY_H
#define ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGSAFETY_H

#include "VTG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VTG_safety_check(const VehicleState* vs, const VTG_State* state);
void VTG_safety_enter_failsoft(VTG_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGSAFETY_H */
