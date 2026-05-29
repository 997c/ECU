#ifndef ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHC_H
#define ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RHC - Ride Height Control (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} RHC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} RHC_State;

void RHC_init(const RHC_Config* cfg);
void RHC_update(float dt_ms, const VehicleState* vs, RHC_State* state, ActuatorCommands* out);
void RHC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHC_H */
