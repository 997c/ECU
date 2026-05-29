#ifndef ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICT_H
#define ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ICT - Intercooler Charge Air Thermal (Thermal) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ICT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ICT_State;

void ICT_init(const ICT_Config* cfg);
void ICT_update(float dt_ms, const VehicleState* vs, ICT_State* state, ActuatorCommands* out);
void ICT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICT_H */
