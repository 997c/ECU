#ifndef ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDW_H
#define ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDW_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FDW - F-Duct Driver-Operated Aero (Aerodynamics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} FDW_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} FDW_State;

void FDW_init(const FDW_Config* cfg);
void FDW_update(float dt_ms, const VehicleState* vs, FDW_State* state, ActuatorCommands* out);
void FDW_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDW_H */
