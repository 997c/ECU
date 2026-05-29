#ifndef ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTC_H
#define ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DTC - Drivetrain Torque Control Auto (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DTC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DTC_State;

void DTC_init(const DTC_Config* cfg);
void DTC_update(float dt_ms, const VehicleState* vs, DTC_State* state, ActuatorCommands* out);
void DTC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTC_H */
