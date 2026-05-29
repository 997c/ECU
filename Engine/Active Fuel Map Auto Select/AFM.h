#ifndef ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFM_H
#define ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AFM - Active Fuel Map Auto Select (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AFM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AFM_State;

void AFM_init(const AFM_Config* cfg);
void AFM_update(float dt_ms, const VehicleState* vs, AFM_State* state, ActuatorCommands* out);
void AFM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFM_H */
