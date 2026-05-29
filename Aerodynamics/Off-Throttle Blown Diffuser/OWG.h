#ifndef ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWG_H
#define ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWG_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OWG - Off-Throttle Blown Diffuser (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} OWG_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} OWG_State;

void OWG_init(const OWG_Config* cfg);
void OWG_update(float dt_ms, const VehicleState* vs, OWG_State* state, ActuatorCommands* out);
void OWG_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWG_H */
