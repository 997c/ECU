#ifndef ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPL_H
#define ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPL_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SPL - Sensor Plausibility Checking (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SPL_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SPL_State;

void SPL_init(const SPL_Config* cfg);
void SPL_update(float dt_ms, const VehicleState* vs, SPL_State* state, ActuatorCommands* out);
void SPL_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPL_H */
