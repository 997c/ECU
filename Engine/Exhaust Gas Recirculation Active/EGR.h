#ifndef ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGR_H
#define ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EGR - Exhaust Gas Recirculation Active (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EGR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EGR_State;

void EGR_init(const EGR_Config* cfg);
void EGR_update(float dt_ms, const VehicleState* vs, EGR_State* state, ActuatorCommands* out);
void EGR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGR_H */
