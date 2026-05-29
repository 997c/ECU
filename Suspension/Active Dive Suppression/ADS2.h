#ifndef ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2_H
#define ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ADS2 - Active Dive Suppression (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ADS2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ADS2_State;

void ADS2_init(const ADS2_Config* cfg);
void ADS2_update(float dt_ms, const VehicleState* vs, ADS2_State* state, ActuatorCommands* out);
void ADS2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2_H */
