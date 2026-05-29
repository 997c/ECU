#ifndef ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTDIAGNOSTICS_H
#define ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTDIAGNOSTICS_H

#include "AVT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AVT_diagnostics_init(void);
void AVT_diagnostics_run(const AVT_State* state);
bool AVT_diagnostics_has_fault(void);
void AVT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTDIAGNOSTICS_H */
