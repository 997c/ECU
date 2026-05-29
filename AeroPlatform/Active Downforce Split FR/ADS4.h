#ifndef ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4_H
#define ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ADS4 - Active Downforce Split FR (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ADS4_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ADS4_State;

void ADS4_init(const ADS4_Config* cfg);
void ADS4_update(float dt_ms, const VehicleState* vs, ADS4_State* state, ActuatorCommands* out);
void ADS4_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4_H */
