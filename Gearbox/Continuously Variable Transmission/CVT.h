#ifndef ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVT_H
#define ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CVT - Continuously Variable Transmission (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} CVT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} CVT_State;

void CVT_init(const CVT_Config* cfg);
void CVT_update(float dt_ms, const VehicleState* vs, CVT_State* state, ActuatorCommands* out);
void CVT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVT_H */
