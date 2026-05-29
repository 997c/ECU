#ifndef ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYT_H
#define ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TYT - Tyre Temperature Management (Thermal) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TYT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TYT_State;

void TYT_init(const TYT_Config* cfg);
void TYT_update(float dt_ms, const VehicleState* vs, TYT_State* state, ActuatorCommands* out);
void TYT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYT_H */
