#ifndef ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTR_H
#define ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UTR - Upshift Torque Recovery (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} UTR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} UTR_State;

void UTR_init(const UTR_Config* cfg);
void UTR_update(float dt_ms, const VehicleState* vs, UTR_State* state, ActuatorCommands* out);
void UTR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTR_H */
