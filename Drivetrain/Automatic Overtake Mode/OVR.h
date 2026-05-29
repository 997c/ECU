#ifndef ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVR_H
#define ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OVR - Automatic Overtake Mode (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} OVR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} OVR_State;

void OVR_init(const OVR_Config* cfg);
void OVR_update(float dt_ms, const VehicleState* vs, OVR_State* state, ActuatorCommands* out);
void OVR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVR_H */
