#ifndef ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCR_H
#define ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* HCR - Homogeneous Charge Compression (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} HCR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} HCR_State;

void HCR_init(const HCR_Config* cfg);
void HCR_update(float dt_ms, const VehicleState* vs, HCR_State* state, ActuatorCommands* out);
void HCR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCR_H */
