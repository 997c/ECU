#ifndef ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDM_H
#define ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* XDM - Exit Diff Map (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} XDM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} XDM_State;

void XDM_init(const XDM_Config* cfg);
void XDM_update(float dt_ms, const VehicleState* vs, XDM_State* state, ActuatorCommands* out);
void XDM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDM_H */
