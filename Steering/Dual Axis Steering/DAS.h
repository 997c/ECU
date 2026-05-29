#ifndef ECU_STEERING_DUAL_AXIS_STEERING_DAS_H
#define ECU_STEERING_DUAL_AXIS_STEERING_DAS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DAS - Dual Axis Steering (Steering) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DAS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DAS_State;

void DAS_init(const DAS_Config* cfg);
void DAS_update(float dt_ms, const VehicleState* vs, DAS_State* state, ActuatorCommands* out);
void DAS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_DUAL_AXIS_STEERING_DAS_H */
