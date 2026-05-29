#ifndef ECU_HYBRID_MGU_H_CONTROL_MGH_H
#define ECU_HYBRID_MGU_H_CONTROL_MGH_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MGH - MGU-H Control (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} MGH_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} MGH_State;

void MGH_init(const MGH_Config* cfg);
void MGH_update(float dt_ms, const VehicleState* vs, MGH_State* state, ActuatorCommands* out);
void MGH_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_H_CONTROL_MGH_H */
