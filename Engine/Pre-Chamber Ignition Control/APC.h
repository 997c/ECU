#ifndef ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APC_H
#define ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* APC - Pre-Chamber Ignition Control (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} APC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} APC_State;

void APC_init(const APC_Config* cfg);
void APC_update(float dt_ms, const VehicleState* vs, APC_State* state, ActuatorCommands* out);
void APC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APC_H */
