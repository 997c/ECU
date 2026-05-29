#ifndef ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCS_H
#define ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TCS - Traction Control System (Traction) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TCS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TCS_State;

void TCS_init(const TCS_Config* cfg);
void TCS_update(float dt_ms, const VehicleState* vs, TCS_State* state, ActuatorCommands* out);
void TCS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCS_H */
