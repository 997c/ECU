#ifndef ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBP_H
#define ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBP_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CBP - Clutch Bite-Point Control (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} CBP_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} CBP_State;

void CBP_init(const CBP_Config* cfg);
void CBP_update(float dt_ms, const VehicleState* vs, CBP_State* state, ActuatorCommands* out);
void CBP_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBP_H */
