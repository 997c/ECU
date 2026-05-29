#ifndef ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLDIAGNOSTICS_H
#define ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLDIAGNOSTICS_H

#include "VVL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VVL_diagnostics_init(void);
void VVL_diagnostics_run(const VVL_State* state);
bool VVL_diagnostics_has_fault(void);
void VVL_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLDIAGNOSTICS_H */
