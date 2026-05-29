#ifndef ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDS_H
#define ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDS_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DDS - Double Diffuser System (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} DDS_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} DDS_State;

void DDS_init(const DDS_Config* cfg);
void DDS_update(float dt_ms, const VehicleState* vs, DDS_State* state, ActuatorCommands* out);
void DDS_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDS_H */
