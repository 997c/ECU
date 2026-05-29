#ifndef ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDM_H
#define ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MDM - Mid-Corner Diff Map (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} MDM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} MDM_State;

void MDM_init(const MDM_Config* cfg);
void MDM_update(float dt_ms, const VehicleState* vs, MDM_State* state, ActuatorCommands* out);
void MDM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDM_H */
