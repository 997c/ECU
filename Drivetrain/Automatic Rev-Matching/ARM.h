#ifndef ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARM_H
#define ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ARM - Automatic Rev-Matching (Drivetrain) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ARM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ARM_State;

void ARM_init(const ARM_Config* cfg);
void ARM_update(float dt_ms, const VehicleState* vs, ARM_State* state, ActuatorCommands* out);
void ARM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARM_H */
