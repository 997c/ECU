#ifndef ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNC_H
#define ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* KNC - Knock Combustion Control (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} KNC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} KNC_State;

void KNC_init(const KNC_Config* cfg);
void KNC_update(float dt_ms, const VehicleState* vs, KNC_State* state, ActuatorCommands* out);
void KNC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNC_H */
