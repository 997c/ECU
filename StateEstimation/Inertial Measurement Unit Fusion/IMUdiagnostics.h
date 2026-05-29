#ifndef ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUDIAGNOSTICS_H
#define ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUDIAGNOSTICS_H

#include "IMU.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void IMU_diagnostics_init(void);
void IMU_diagnostics_run(const IMU_State* state);
bool IMU_diagnostics_has_fault(void);
void IMU_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUDIAGNOSTICS_H */
