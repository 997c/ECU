#ifndef ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABA_H
#define ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ABA - Aero Balance Control (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ABA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ABA_State;

void ABA_init(const ABA_Config* cfg);
void ABA_update(float dt_ms, const VehicleState* vs, ABA_State* state, ActuatorCommands* out);
void ABA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABA_H */
