#ifndef ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDM_H
#define ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EDM - Entry Diff Map (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EDM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EDM_State;

void EDM_init(const EDM_Config* cfg);
void EDM_update(float dt_ms, const VehicleState* vs, EDM_State* state, ActuatorCommands* out);
void EDM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDM_H */
