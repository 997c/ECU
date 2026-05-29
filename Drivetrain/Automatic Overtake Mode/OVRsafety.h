#ifndef ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRSAFETY_H
#define ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRSAFETY_H

#include "OVR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool OVR_safety_check(const VehicleState* vs, const OVR_State* state);
void OVR_safety_enter_failsoft(OVR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRSAFETY_H */
