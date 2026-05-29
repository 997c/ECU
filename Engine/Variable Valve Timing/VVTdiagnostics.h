#ifndef ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTDIAGNOSTICS_H
#define ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTDIAGNOSTICS_H

#include "VVT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VVT_diagnostics_init(void);
void VVT_diagnostics_run(const VVT_State* state);
bool VVT_diagnostics_has_fault(void);
void VVT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTDIAGNOSTICS_H */
