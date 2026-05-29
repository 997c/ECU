#ifndef ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EIS_H
#define ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EIS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EIS - ERS Isolation Safety (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EIS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EIS_State;

void EIS_init(const EIS_Config* cfg);
void EIS_update(float dt_ms, const VehicleState* vs, EIS_State* state, ActuatorCommands* out);
void EIS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EIS_H */
