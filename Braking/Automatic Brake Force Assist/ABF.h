#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABF_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABF_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ABF - Automatic Brake Force Assist (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ABF_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ABF_State;

void ABF_init(const ABF_Config* cfg);
void ABF_update(float dt_ms, const VehicleState* vs, ABF_State* state, ActuatorCommands* out);
void ABF_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABF_H */
