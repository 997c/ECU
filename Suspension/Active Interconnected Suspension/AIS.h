#ifndef ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AIS_H
#define ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AIS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AIS - Active Interconnected Suspension (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AIS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AIS_State;

void AIS_init(const AIS_Config* cfg);
void AIS_update(float dt_ms, const VehicleState* vs, AIS_State* state, ActuatorCommands* out);
void AIS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AIS_H */
