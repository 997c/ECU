#ifndef ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUSAFETY_H
#define ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUSAFETY_H

#include "IMU.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool IMU_safety_check(const VehicleState* vs, const IMU_State* state);
void IMU_safety_enter_failsoft(IMU_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUSAFETY_H */
