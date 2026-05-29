#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARH_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARH_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ARH - Active Ride Height Front (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ARH_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ARH_State;

void ARH_init(const ARH_Config* cfg);
void ARH_update(float dt_ms, const VehicleState* vs, ARH_State* state, ActuatorCommands* out);
void ARH_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARH_H */
