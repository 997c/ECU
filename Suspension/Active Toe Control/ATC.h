#ifndef ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATC_H
#define ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ATC - Active Toe Control (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ATC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ATC_State;

void ATC_init(const ATC_Config* cfg);
void ATC_update(float dt_ms, const VehicleState* vs, ATC_State* state, ActuatorCommands* out);
void ATC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATC_H */
