#ifndef ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECT_H
#define ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ECT - Engine Coolant Thermal Mgmt (Thermal) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ECT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ECT_State;

void ECT_init(const ECT_Config* cfg);
void ECT_update(float dt_ms, const VehicleState* vs, ECT_State* state, ActuatorCommands* out);
void ECT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECT_H */
