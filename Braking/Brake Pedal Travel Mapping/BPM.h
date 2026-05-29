#ifndef ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPM_H
#define ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BPM - Brake Pedal Travel Mapping (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} BPM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} BPM_State;

void BPM_init(const BPM_Config* cfg);
void BPM_update(float dt_ms, const VehicleState* vs, BPM_State* state, ActuatorCommands* out);
void BPM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPM_H */
