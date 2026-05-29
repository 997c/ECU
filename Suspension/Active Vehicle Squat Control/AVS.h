#ifndef ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVS_H
#define ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AVS - Active Vehicle Squat Control (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AVS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AVS_State;

void AVS_init(const AVS_Config* cfg);
void AVS_update(float dt_ms, const VehicleState* vs, AVS_State* state, ActuatorCommands* out);
void AVS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVS_H */
