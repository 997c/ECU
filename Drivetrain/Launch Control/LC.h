#ifndef ECU_DRIVETRAIN_LAUNCH_CONTROL_LC_H
#define ECU_DRIVETRAIN_LAUNCH_CONTROL_LC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LC - Launch Control (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} LC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} LC_State;

void LC_init(const LC_Config* cfg);
void LC_update(float dt_ms, const VehicleState* vs, LC_State* state, ActuatorCommands* out);
void LC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_LAUNCH_CONTROL_LC_H */
