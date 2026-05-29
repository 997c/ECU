#ifndef ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUINTEGRATION_H
#define ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUINTEGRATION_H

#include "ecu_bridge.h"
#include "IMU.h"

#ifdef __cplusplus
extern "C" {
#endif

void IMU_integration_init(void);
void IMU_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMUINTEGRATION_H */
