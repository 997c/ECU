#ifndef ECU_STABILITY_ACTIVE_YAW_CONTROL_AYC_H
#define ECU_STABILITY_ACTIVE_YAW_CONTROL_AYC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AYC - Active Yaw Control (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AYC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AYC_State;

void AYC_init(const AYC_Config* cfg);
void AYC_update(float dt_ms, const VehicleState* vs, AYC_State* state, ActuatorCommands* out);
void AYC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ACTIVE_YAW_CONTROL_AYC_H */
