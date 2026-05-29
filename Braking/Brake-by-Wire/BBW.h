#ifndef ECU_BRAKING_BRAKE_BY_WIRE_BBW_H
#define ECU_BRAKING_BRAKE_BY_WIRE_BBW_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BBW - Brake-by-Wire (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} BBW_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} BBW_State;

void BBW_init(const BBW_Config* cfg);
void BBW_update(float dt_ms, const VehicleState* vs, BBW_State* state, ActuatorCommands* out);
void BBW_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_BY_WIRE_BBW_H */
