#ifndef ECU_GEARBOX_SHIFT_CUT_CONTROL_SCC_H
#define ECU_GEARBOX_SHIFT_CUT_CONTROL_SCC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SCC - Shift Cut Control (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SCC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SCC_State;

void SCC_init(const SCC_Config* cfg);
void SCC_update(float dt_ms, const VehicleState* vs, SCC_State* state, ActuatorCommands* out);
void SCC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_SHIFT_CUT_CONTROL_SCC_H */
