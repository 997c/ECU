#ifndef ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARD_H
#define ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARD_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ARD - Active Rear Differential Full Auto (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ARD_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ARD_State;

void ARD_init(const ARD_Config* cfg);
void ARD_update(float dt_ms, const VehicleState* vs, ARD_State* state, ActuatorCommands* out);
void ARD_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARD_H */
