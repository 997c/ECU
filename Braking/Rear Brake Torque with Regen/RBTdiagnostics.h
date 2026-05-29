#ifndef ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTDIAGNOSTICS_H
#define ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTDIAGNOSTICS_H

#include "RBT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void RBT_diagnostics_init(void);
void RBT_diagnostics_run(const RBT_State* state);
bool RBT_diagnostics_has_fault(void);
void RBT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTDIAGNOSTICS_H */
