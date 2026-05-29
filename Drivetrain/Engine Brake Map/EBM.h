#ifndef ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBM_H
#define ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EBM - Engine Brake Map (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EBM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EBM_State;

void EBM_init(const EBM_Config* cfg);
void EBM_update(float dt_ms, const VehicleState* vs, EBM_State* state, ActuatorCommands* out);
void EBM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBM_H */
