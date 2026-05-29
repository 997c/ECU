#ifndef ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMS_H
#define ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BMS - Brake Migration Shaping (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} BMS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} BMS_State;

void BMS_init(const BMS_Config* cfg);
void BMS_update(float dt_ms, const VehicleState* vs, BMS_State* state, ActuatorCommands* out);
void BMS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMS_H */
