#ifndef ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRS_H
#define ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DRS - Drag Reduction System (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DRS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DRS_State;

void DRS_init(const DRS_Config* cfg);
void DRS_update(float dt_ms, const VehicleState* vs, DRS_State* state, ActuatorCommands* out);
void DRS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRS_H */
