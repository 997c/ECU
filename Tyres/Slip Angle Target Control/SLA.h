#ifndef ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLA_H
#define ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SLA - Slip Angle Target Control (Tyres) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SLA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SLA_State;

void SLA_init(const SLA_Config* cfg);
void SLA_update(float dt_ms, const VehicleState* vs, SLA_State* state, ActuatorCommands* out);
void SLA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLA_H */
