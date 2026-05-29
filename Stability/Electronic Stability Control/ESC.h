#ifndef ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESC_H
#define ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ESC - Electronic Stability Control (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ESC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ESC_State;

void ESC_init(const ESC_Config* cfg);
void ESC_update(float dt_ms, const VehicleState* vs, ESC_State* state, ActuatorCommands* out);
void ESC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESC_H */
