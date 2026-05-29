#ifndef ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USC_H
#define ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* USC - Understeer Control Auto (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} USC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} USC_State;

void USC_init(const USC_Config* cfg);
void USC_update(float dt_ms, const VehicleState* vs, USC_State* state, ActuatorCommands* out);
void USC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USC_H */
