#ifndef ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUCONFIG_H
#define ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUCONFIG_H

#include "IMU.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const IMU_Config IMU_default_config;
void IMU_config_load_defaults(IMU_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUCONFIG_H */
