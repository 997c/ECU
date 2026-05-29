#ifndef ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGT_H
#define ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MGT - MGU Temperature Control (Thermal) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} MGT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} MGT_State;

void MGT_init(const MGT_Config* cfg);
void MGT_update(float dt_ms, const VehicleState* vs, MGT_State* state, ActuatorCommands* out);
void MGT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGT_H */
