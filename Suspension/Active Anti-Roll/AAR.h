#ifndef ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AAR_H
#define ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AAR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AAR - Active Anti-Roll (Suspension) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AAR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AAR_State;

void AAR_init(const AAR_Config* cfg);
void AAR_update(float dt_ms, const VehicleState* vs, AAR_State* state, ActuatorCommands* out);
void AAR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AAR_H */
