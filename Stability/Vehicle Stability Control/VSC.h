#ifndef ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSC_H
#define ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VSC - Vehicle Stability Control (Stability) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VSC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VSC_State;

void VSC_init(const VSC_Config* cfg);
void VSC_update(float dt_ms, const VehicleState* vs, VSC_State* state, ActuatorCommands* out);
void VSC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSC_H */
