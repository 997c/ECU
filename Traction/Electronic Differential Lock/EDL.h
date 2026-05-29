#ifndef ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDL_H
#define ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDL_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EDL - Electronic Differential Lock (Traction) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} EDL_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} EDL_State;

void EDL_init(const EDL_Config* cfg);
void EDL_update(float dt_ms, const VehicleState* vs, EDL_State* state, ActuatorCommands* out);
void EDL_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDL_H */
