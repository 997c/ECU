#ifndef ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCDIAGNOSTICS_H
#define ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCDIAGNOSTICS_H

#include "HVC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void HVC_diagnostics_init(void);
void HVC_diagnostics_run(const HVC_State* state);
bool HVC_diagnostics_has_fault(void);
void HVC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCDIAGNOSTICS_H */
