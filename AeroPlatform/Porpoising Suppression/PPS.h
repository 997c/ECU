#ifndef ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPS_H
#define ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PPS - Porpoising Suppression (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} PPS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} PPS_State;

void PPS_init(const PPS_Config* cfg);
void PPS_update(float dt_ms, const VehicleState* vs, PPS_State* state, ActuatorCommands* out);
void PPS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPS_H */
