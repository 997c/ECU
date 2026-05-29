#ifndef ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3_H
#define ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ADS3 - Active Drag Shaping (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ADS3_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ADS3_State;

void ADS3_init(const ADS3_Config* cfg);
void ADS3_update(float dt_ms, const VehicleState* vs, ADS3_State* state, ActuatorCommands* out);
void ADS3_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3_H */
