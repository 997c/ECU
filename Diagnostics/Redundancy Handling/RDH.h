#ifndef ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDH_H
#define ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDH_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RDH - Redundancy Handling (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} RDH_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} RDH_State;

void RDH_init(const RDH_Config* cfg);
void RDH_update(float dt_ms, const VehicleState* vs, RDH_State* state, ActuatorCommands* out);
void RDH_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDH_H */
