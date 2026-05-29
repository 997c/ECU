#ifndef ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCR_H
#define ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCR_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VCR - Variable Compression Ratio (Engine) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} VCR_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} VCR_State;

void VCR_init(const VCR_Config* cfg);
void VCR_update(float dt_ms, const VehicleState* vs, VCR_State* state, ActuatorCommands* out);
void VCR_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCR_H */
