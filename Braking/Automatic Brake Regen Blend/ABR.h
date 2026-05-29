#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABR_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ABR - Automatic Brake Regen Blend (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ABR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ABR_State;

void ABR_init(const ABR_Config* cfg);
void ABR_update(float dt_ms, const VehicleState* vs, ABR_State* state, ActuatorCommands* out);
void ABR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABR_H */
