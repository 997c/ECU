#ifndef ECU_GEARBOX_ANTI_STALL_AST_H
#define ECU_GEARBOX_ANTI_STALL_AST_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AST - Anti-Stall (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AST_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AST_State;

void AST_init(const AST_Config* cfg);
void AST_update(float dt_ms, const VehicleState* vs, AST_State* state, ActuatorCommands* out);
void AST_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_ANTI_STALL_AST_H */
