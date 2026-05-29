#ifndef ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDR_H
#define ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MDR - Mass Damper Tuned Mass (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} MDR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} MDR_State;

void MDR_init(const MDR_Config* cfg);
void MDR_update(float dt_ms, const VehicleState* vs, MDR_State* state, ActuatorCommands* out);
void MDR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDR_H */
