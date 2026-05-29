#ifndef ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSSAFETY_H
#define ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSSAFETY_H

#include "AVS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AVS_safety_check(const VehicleState* vs, const AVS_State* state);
void AVS_safety_enter_failsoft(AVS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSSAFETY_H */
