#ifndef ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETC_H
#define ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETC_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ETC - Electronic Throttle Control (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} ETC_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} ETC_State;

void ETC_init(const ETC_Config* cfg);
void ETC_update(float dt_ms, const VehicleState* vs, ETC_State* state, ActuatorCommands* out);
void ETC_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETC_H */
