#ifndef ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKR_H
#define ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AKR - Auto Kinetic Recovery (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AKR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AKR_State;

void AKR_init(const AKR_Config* cfg);
void AKR_update(float dt_ms, const VehicleState* vs, AKR_State* state, ActuatorCommands* out);
void AKR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKR_H */
