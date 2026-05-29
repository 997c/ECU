#ifndef ECU_TYRES_TYRE_PRESSURE_MONITORING_TPM_H
#define ECU_TYRES_TYRE_PRESSURE_MONITORING_TPM_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TPM - Tyre Pressure Monitoring (Tyres) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TPM_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TPM_State;

void TPM_init(const TPM_Config* cfg);
void TPM_update(float dt_ms, const VehicleState* vs, TPM_State* state, ActuatorCommands* out);
void TPM_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TYRE_PRESSURE_MONITORING_TPM_H */
