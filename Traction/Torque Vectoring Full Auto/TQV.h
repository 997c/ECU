#ifndef ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQV_H
#define ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQV_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TQV - Torque Vectoring Full Auto (Traction) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} TQV_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} TQV_State;

void TQV_init(const TQV_Config* cfg);
void TQV_update(float dt_ms, const VehicleState* vs, TQV_State* state, ActuatorCommands* out);
void TQV_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQV_H */
