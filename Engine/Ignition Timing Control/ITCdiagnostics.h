#ifndef ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCDIAGNOSTICS_H
#define ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCDIAGNOSTICS_H

#include "ITC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ITC_diagnostics_init(void);
void ITC_diagnostics_run(const ITC_State* state);
bool ITC_diagnostics_has_fault(void);
void ITC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCDIAGNOSTICS_H */
