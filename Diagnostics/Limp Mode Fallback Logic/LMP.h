#ifndef ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMP_H
#define ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMP_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LMP - Limp Mode Fallback Logic (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} LMP_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} LMP_State;

void LMP_init(const LMP_Config* cfg);
void LMP_update(float dt_ms, const VehicleState* vs, LMP_State* state, ActuatorCommands* out);
void LMP_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMP_H */
