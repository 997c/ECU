#ifndef ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBA_H
#define ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* HBA - Hydraulic Brake Assist (Braking) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} HBA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} HBA_State;

void HBA_init(const HBA_Config* cfg);
void HBA_update(float dt_ms, const VehicleState* vs, HBA_State* state, ActuatorCommands* out);
void HBA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBA_H */
