#ifndef ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETS_H
#define ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ETS - Electronic Torque Split (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ETS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ETS_State;

void ETS_init(const ETS_Config* cfg);
void ETS_update(float dt_ms, const VehicleState* vs, ETS_State* state, ActuatorCommands* out);
void ETS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETS_H */
