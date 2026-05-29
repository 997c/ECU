#ifndef ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFT_H
#define ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AFT - Active Floor Throat Control (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AFT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AFT_State;

void AFT_init(const AFT_Config* cfg);
void AFT_update(float dt_ms, const VehicleState* vs, AFT_State* state, ActuatorCommands* out);
void AFT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFT_H */
