#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AGS2 - Automatic Gear Shift Strategy (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AGS2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AGS2_State;

void AGS2_init(const AGS2_Config* cfg);
void AGS2_update(float dt_ms, const VehicleState* vs, AGS2_State* state, ActuatorCommands* out);
void AGS2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2_H */
