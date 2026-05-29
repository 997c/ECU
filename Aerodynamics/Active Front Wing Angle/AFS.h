#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFS_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AFS - Active Front Wing Angle (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AFS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AFS_State;

void AFS_init(const AFS_Config* cfg);
void AFS_update(float dt_ms, const VehicleState* vs, AFS_State* state, ActuatorCommands* out);
void AFS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFS_H */
