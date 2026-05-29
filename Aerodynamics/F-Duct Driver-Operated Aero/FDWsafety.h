#ifndef ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWSAFETY_H
#define ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWSAFETY_H

#include "FDW.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool FDW_safety_check(const VehicleState* vs, const FDW_State* state);
void FDW_safety_enter_failsoft(FDW_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWSAFETY_H */
