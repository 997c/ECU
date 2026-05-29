#ifndef ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRS_H
#define ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MRS - Magnetorheological Suspension (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} MRS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} MRS_State;

void MRS_init(const MRS_Config* cfg);
void MRS_update(float dt_ms, const VehicleState* vs, MRS_State* state, ActuatorCommands* out);
void MRS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRS_H */
