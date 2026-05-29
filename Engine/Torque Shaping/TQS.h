#ifndef ECU_ENGINE_TORQUE_SHAPING_TQS_H
#define ECU_ENGINE_TORQUE_SHAPING_TQS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TQS - Torque Shaping (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TQS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TQS_State;

void TQS_init(const TQS_Config* cfg);
void TQS_update(float dt_ms, const VehicleState* vs, TQS_State* state, ActuatorCommands* out);
void TQS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TORQUE_SHAPING_TQS_H */
