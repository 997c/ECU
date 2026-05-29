#ifndef ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDS_H
#define ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VDS - Variable Downforce System (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VDS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VDS_State;

void VDS_init(const VDS_Config* cfg);
void VDS_update(float dt_ms, const VehicleState* vs, VDS_State* state, ActuatorCommands* out);
void VDS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDS_H */
