#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABP_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABP_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ABP - Automatic Brake Pressure Modulation (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ABP_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ABP_State;

void ABP_init(const ABP_Config* cfg);
void ABP_update(float dt_ms, const VehicleState* vs, ABP_State* state, ActuatorCommands* out);
void ABP_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABP_H */
