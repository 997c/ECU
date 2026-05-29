#ifndef ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTM_H
#define ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BTM - Battery Thermal Management (Thermal) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} BTM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} BTM_State;

void BTM_init(const BTM_Config* cfg);
void BTM_update(float dt_ms, const VehicleState* vs, BTM_State* state, ActuatorCommands* out);
void BTM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTM_H */
