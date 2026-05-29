#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ARH2 - Active Ride Height Rear (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ARH2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ARH2_State;

void ARH2_init(const ARH2_Config* cfg);
void ARH2_update(float dt_ms, const VehicleState* vs, ARH2_State* state, ActuatorCommands* out);
void ARH2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2_H */
