#ifndef ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHS_H
#define ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SHS - Self-Levelling Hydraulic Suspension (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SHS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SHS_State;

void SHS_init(const SHS_Config* cfg);
void SHS_update(float dt_ms, const VehicleState* vs, SHS_State* state, ActuatorCommands* out);
void SHS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHS_H */
