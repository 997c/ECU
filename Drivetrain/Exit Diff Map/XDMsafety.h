#ifndef ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMSAFETY_H
#define ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMSAFETY_H

#include "XDM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool XDM_safety_check(const VehicleState* vs, const XDM_State* state);
void XDM_safety_enter_failsoft(XDM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMSAFETY_H */
