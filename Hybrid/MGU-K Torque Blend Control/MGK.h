#ifndef ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGK_H
#define ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGK_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MGK - MGU-K Torque Blend Control (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} MGK_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} MGK_State;

void MGK_init(const MGK_Config* cfg);
void MGK_update(float dt_ms, const VehicleState* vs, MGK_State* state, ActuatorCommands* out);
void MGK_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGK_H */
