#ifndef ECU_ENGINE_FUEL_INJECTION_CONTROL_FIC_H
#define ECU_ENGINE_FUEL_INJECTION_CONTROL_FIC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FIC - Fuel Injection Control (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} FIC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} FIC_State;

void FIC_init(const FIC_Config* cfg);
void FIC_update(float dt_ms, const VehicleState* vs, FIC_State* state, ActuatorCommands* out);
void FIC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_INJECTION_CONTROL_FIC_H */
