#ifndef ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGSAFETY_H
#define ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGSAFETY_H

#include "VIG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VIG_safety_check(const VehicleState* vs, const VIG_State* state);
void VIG_safety_enter_failsoft(VIG_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGSAFETY_H */
