#ifndef ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBD_H
#define ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBD_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EBD - Electronic Brakeforce Distribution (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EBD_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EBD_State;

void EBD_init(const EBD_Config* cfg);
void EBD_update(float dt_ms, const VehicleState* vs, EBD_State* state, ActuatorCommands* out);
void EBD_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBD_H */
