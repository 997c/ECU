#ifndef ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADS_H
#define ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ADS - Adaptive Damping System (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ADS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ADS_State;

void ADS_init(const ADS_Config* cfg);
void ADS_update(float dt_ms, const VehicleState* vs, ADS_State* state, ActuatorCommands* out);
void ADS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADS_H */
