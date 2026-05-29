#ifndef ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCSAFETY_H
#define ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCSAFETY_H

#include "VDC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VDC_safety_check(const VehicleState* vs, const VDC_State* state);
void VDC_safety_enter_failsoft(VDC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCSAFETY_H */
