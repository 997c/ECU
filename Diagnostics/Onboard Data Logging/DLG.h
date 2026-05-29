#ifndef ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLG_H
#define ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLG_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DLG - Onboard Data Logging (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DLG_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DLG_State;

void DLG_init(const DLG_Config* cfg);
void DLG_update(float dt_ms, const VehicleState* vs, DLG_State* state, ActuatorCommands* out);
void DLG_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLG_H */
