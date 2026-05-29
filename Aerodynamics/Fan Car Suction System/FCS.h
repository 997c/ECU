#ifndef ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCS_H
#define ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FCS - Fan Car Suction System (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} FCS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} FCS_State;

void FCS_init(const FCS_Config* cfg);
void FCS_update(float dt_ms, const VehicleState* vs, FCS_State* state, ActuatorCommands* out);
void FCS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCS_H */
