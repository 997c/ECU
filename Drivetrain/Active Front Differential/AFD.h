#ifndef ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFD_H
#define ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFD_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AFD - Active Front Differential (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AFD_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AFD_State;

void AFD_init(const AFD_Config* cfg);
void AFD_update(float dt_ms, const VehicleState* vs, AFD_State* state, ActuatorCommands* out);
void AFD_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFD_H */
