#ifndef ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMU_H
#define ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMU_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* IMU - Inertial Measurement Unit Fusion (State_Estimation) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} IMU_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} IMU_State;

void IMU_init(const IMU_Config* cfg);
void IMU_update(float dt_ms, const VehicleState* vs, IMU_State* state, ActuatorCommands* out);
void IMU_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_INERTIAL_MEASUREMENT_UNIT_FUSION_IMU_H */
