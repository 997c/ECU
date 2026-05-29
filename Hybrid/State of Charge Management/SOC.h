#ifndef ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOC_H
#define ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SOC - State of Charge Management (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SOC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SOC_State;

void SOC_init(const SOC_Config* cfg);
void SOC_update(float dt_ms, const VehicleState* vs, SOC_State* state, ActuatorCommands* out);
void SOC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOC_H */
