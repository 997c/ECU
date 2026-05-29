#ifndef ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGS_H
#define ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OGS - Optimal Gear Selection Auto (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} OGS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} OGS_State;

void OGS_init(const OGS_Config* cfg);
void OGS_update(float dt_ms, const VehicleState* vs, OGS_State* state, ActuatorCommands* out);
void OGS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGS_H */
