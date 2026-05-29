#ifndef ECU_AERO_PLATFORM_PITCH_CONTROL_PTCDIAGNOSTICS_H
#define ECU_AERO_PLATFORM_PITCH_CONTROL_PTCDIAGNOSTICS_H

#include "PTC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void PTC_diagnostics_init(void);
void PTC_diagnostics_run(const PTC_State* state);
bool PTC_diagnostics_has_fault(void);
void PTC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PITCH_CONTROL_PTCDIAGNOSTICS_H */
