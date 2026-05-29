#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGS_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AGS - Automatic Gear Selection (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AGS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AGS_State;

void AGS_init(const AGS_Config* cfg);
void AGS_update(float dt_ms, const VehicleState* vs, AGS_State* state, ActuatorCommands* out);
void AGS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGS_H */
