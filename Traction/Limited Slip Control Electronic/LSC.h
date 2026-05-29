#ifndef ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSC_H
#define ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LSC - Limited Slip Control Electronic (Traction) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} LSC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} LSC_State;

void LSC_init(const LSC_Config* cfg);
void LSC_update(float dt_ms, const VehicleState* vs, LSC_State* state, ActuatorCommands* out);
void LSC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSC_H */
