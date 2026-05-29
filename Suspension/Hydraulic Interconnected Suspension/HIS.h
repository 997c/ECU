#ifndef ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HIS_H
#define ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HIS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* HIS - Hydraulic Interconnected Suspension (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} HIS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} HIS_State;

void HIS_init(const HIS_Config* cfg);
void HIS_update(float dt_ms, const VehicleState* vs, HIS_State* state, ActuatorCommands* out);
void HIS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HIS_H */
