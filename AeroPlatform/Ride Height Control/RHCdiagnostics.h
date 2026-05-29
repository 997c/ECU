#ifndef ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCDIAGNOSTICS_H
#define ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCDIAGNOSTICS_H

#include "RHC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void RHC_diagnostics_init(void);
void RHC_diagnostics_run(const RHC_State* state);
bool RHC_diagnostics_has_fault(void);
void RHC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCDIAGNOSTICS_H */
