#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGP_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGP_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AGP - Automatic Gear Protection (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AGP_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AGP_State;

void AGP_init(const AGP_Config* cfg);
void AGP_update(float dt_ms, const VehicleState* vs, AGP_State* state, ActuatorCommands* out);
void AGP_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGP_H */
