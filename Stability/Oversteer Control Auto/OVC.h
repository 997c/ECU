#ifndef ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVC_H
#define ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OVC - Oversteer Control Auto (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} OVC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} OVC_State;

void OVC_init(const OVC_Config* cfg);
void OVC_update(float dt_ms, const VehicleState* vs, OVC_State* state, ActuatorCommands* out);
void OVC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVC_H */
