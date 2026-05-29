#ifndef ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFM_H
#define ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DFM - Differential Map Control (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DFM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DFM_State;

void DFM_init(const DFM_Config* cfg);
void DFM_update(float dt_ms, const VehicleState* vs, DFM_State* state, ActuatorCommands* out);
void DFM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFM_H */
