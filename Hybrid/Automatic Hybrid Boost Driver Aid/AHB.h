#ifndef ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHB_H
#define ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHB_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AHB - Automatic Hybrid Boost Driver Aid (Hybrid) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} AHB_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} AHB_State;

void AHB_init(const AHB_Config* cfg);
void AHB_update(float dt_ms, const VehicleState* vs, AHB_State* state, ActuatorCommands* out);
void AHB_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHB_H */
