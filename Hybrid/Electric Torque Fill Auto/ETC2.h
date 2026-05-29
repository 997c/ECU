#ifndef ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2_H
#define ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ETC2 - Electric Torque Fill Auto (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ETC2_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ETC2_State;

void ETC2_init(const ETC2_Config* cfg);
void ETC2_update(float dt_ms, const VehicleState* vs, ETC2_State* state, ActuatorCommands* out);
void ETC2_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2_H */
