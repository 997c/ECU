#ifndef ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRDIAGNOSTICS_H
#define ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRDIAGNOSTICS_H

#include "SLR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SLR_diagnostics_init(void);
void SLR_diagnostics_run(const SLR_State* state);
bool SLR_diagnostics_has_fault(void);
void SLR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRDIAGNOSTICS_H */
