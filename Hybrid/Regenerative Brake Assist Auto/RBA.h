#ifndef ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBA_H
#define ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RBA - Regenerative Brake Assist Auto (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} RBA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} RBA_State;

void RBA_init(const RBA_Config* cfg);
void RBA_update(float dt_ms, const VehicleState* vs, RBA_State* state, ActuatorCommands* out);
void RBA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBA_H */
