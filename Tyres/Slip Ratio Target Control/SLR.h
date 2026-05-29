#ifndef ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLR_H
#define ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SLR - Slip Ratio Target Control (Tyres) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SLR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SLR_State;

void SLR_init(const SLR_Config* cfg);
void SLR_update(float dt_ms, const VehicleState* vs, SLR_State* state, ActuatorCommands* out);
void SLR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLR_H */
