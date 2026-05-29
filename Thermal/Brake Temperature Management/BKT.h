#ifndef ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKT_H
#define ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BKT - Brake Temperature Management (Thermal) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} BKT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} BKT_State;

void BKT_init(const BKT_Config* cfg);
void BKT_update(float dt_ms, const VehicleState* vs, BKT_State* state, ActuatorCommands* out);
void BKT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKT_H */
