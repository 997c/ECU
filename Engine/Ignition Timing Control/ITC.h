#ifndef ECU_ENGINE_IGNITION_TIMING_CONTROL_ITC_H
#define ECU_ENGINE_IGNITION_TIMING_CONTROL_ITC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ITC - Ignition Timing Control (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ITC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ITC_State;

void ITC_init(const ITC_Config* cfg);
void ITC_update(float dt_ms, const VehicleState* vs, ITC_State* state, ActuatorCommands* out);
void ITC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_IGNITION_TIMING_CONTROL_ITC_H */
