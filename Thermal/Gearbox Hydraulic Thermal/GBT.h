#ifndef ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBT_H
#define ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GBT - Gearbox Hydraulic Thermal (Thermal) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} GBT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} GBT_State;

void GBT_init(const GBT_Config* cfg);
void GBT_update(float dt_ms, const VehicleState* vs, GBT_State* state, ActuatorCommands* out);
void GBT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBT_H */
