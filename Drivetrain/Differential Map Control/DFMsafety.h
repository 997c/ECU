#ifndef ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMSAFETY_H
#define ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMSAFETY_H

#include "DFM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DFM_safety_check(const VehicleState* vs, const DFM_State* state);
void DFM_safety_enter_failsoft(DFM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMSAFETY_H */
