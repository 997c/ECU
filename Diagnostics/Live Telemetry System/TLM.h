#ifndef ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLM_H
#define ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TLM - Live Telemetry System (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TLM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TLM_State;

void TLM_init(const TLM_Config* cfg);
void TLM_update(float dt_ms, const VehicleState* vs, TLM_State* state, ActuatorCommands* out);
void TLM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLM_H */
