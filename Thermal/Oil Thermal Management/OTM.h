#ifndef ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTM_H
#define ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OTM - Oil Thermal Management (Thermal) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} OTM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} OTM_State;

void OTM_init(const OTM_Config* cfg);
void OTM_update(float dt_ms, const VehicleState* vs, OTM_State* state, ActuatorCommands* out);
void OTM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTM_H */
