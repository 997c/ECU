#ifndef ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2_H
#define ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EBD2 - Exhaust Blown Diffuser (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EBD2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EBD2_State;

void EBD2_init(const EBD2_Config* cfg);
void EBD2_update(float dt_ms, const VehicleState* vs, EBD2_State* state, ActuatorCommands* out);
void EBD2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2_H */
