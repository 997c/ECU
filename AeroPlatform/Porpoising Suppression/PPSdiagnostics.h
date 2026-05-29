#ifndef ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSDIAGNOSTICS_H
#define ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSDIAGNOSTICS_H

#include "PPS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void PPS_diagnostics_init(void);
void PPS_diagnostics_run(const PPS_State* state);
bool PPS_diagnostics_has_fault(void);
void PPS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSDIAGNOSTICS_H */
