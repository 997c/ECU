#ifndef ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSP_H
#define ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSP_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DSP - Downshift Protection (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DSP_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DSP_State;

void DSP_init(const DSP_Config* cfg);
void DSP_update(float dt_ms, const VehicleState* vs, DSP_State* state, ActuatorCommands* out);
void DSP_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSP_H */
