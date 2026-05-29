#ifndef ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSA_H
#define ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSA_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FSA - Floor Stall Avoidance (Aero_Platform) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} FSA_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} FSA_State;

void FSA_init(const FSA_Config* cfg);
void FSA_update(float dt_ms, const VehicleState* vs, FSA_State* state, ActuatorCommands* out);
void FSA_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSA_H */
