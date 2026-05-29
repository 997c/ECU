#ifndef ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCS_H
#define ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RCS - Regenerative Cornering Strategy Auto (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} RCS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} RCS_State;

void RCS_init(const RCS_Config* cfg);
void RCS_update(float dt_ms, const VehicleState* vs, RCS_State* state, ActuatorCommands* out);
void RCS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCS_H */
