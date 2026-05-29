#ifndef ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRIC_H
#define ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRIC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FRIC - Front-Rear Interconnected Suspension (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} FRIC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} FRIC_State;

void FRIC_init(const FRIC_Config* cfg);
void FRIC_update(float dt_ms, const VehicleState* vs, FRIC_State* state, ActuatorCommands* out);
void FRIC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRIC_H */
