#ifndef ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCT_H
#define ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCT_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DCT - Dual Clutch Transmission (Gearbox) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DCT_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DCT_State;

void DCT_init(const DCT_Config* cfg);
void DCT_update(float dt_ms, const VehicleState* vs, DCT_State* state, ActuatorCommands* out);
void DCT_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCT_H */
