#ifndef ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWF_H
#define ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWF_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AWF - Active Wing Flap non-DRS (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AWF_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AWF_State;

void AWF_init(const AWF_Config* cfg);
void AWF_update(float dt_ms, const VehicleState* vs, AWF_State* state, ActuatorCommands* out);
void AWF_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWF_H */
