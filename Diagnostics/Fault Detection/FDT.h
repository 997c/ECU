#ifndef ECU_DIAGNOSTICS_FAULT_DETECTION_FDT_H
#define ECU_DIAGNOSTICS_FAULT_DETECTION_FDT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FDT - Fault Detection (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} FDT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} FDT_State;

void FDT_init(const FDT_Config* cfg);
void FDT_update(float dt_ms, const VehicleState* vs, FDT_State* state, ActuatorCommands* out);
void FDT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_FAULT_DETECTION_FDT_H */
