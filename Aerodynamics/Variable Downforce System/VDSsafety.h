#ifndef ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSSAFETY_H
#define ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSSAFETY_H

#include "VDS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VDS_safety_check(const VehicleState* vs, const VDS_State* state);
void VDS_safety_enter_failsoft(VDS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSSAFETY_H */
