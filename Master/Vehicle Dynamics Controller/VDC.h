#ifndef ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDC_H
#define ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VDC - Vehicle Dynamics Controller (Master) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VDC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VDC_State;

void VDC_init(const VDC_Config* cfg);
void VDC_update(float dt_ms, const VehicleState* vs, VDC_State* state, ActuatorCommands* out);
void VDC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDC_H */
