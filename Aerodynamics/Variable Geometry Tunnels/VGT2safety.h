#ifndef ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2SAFETY_H
#define ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2SAFETY_H

#include "VGT2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VGT2_safety_check(const VehicleState* vs, const VGT2_State* state);
void VGT2_safety_enter_failsoft(VGT2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2SAFETY_H */
