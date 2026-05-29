#ifndef ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVE_H
#define ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVE_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TVE - Torque Vectoring by Electric Motor (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TVE_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TVE_State;

void TVE_init(const TVE_Config* cfg);
void TVE_update(float dt_ms, const VehicleState* vs, TVE_State* state, ActuatorCommands* out);
void TVE_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVE_H */
