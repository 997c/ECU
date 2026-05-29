#ifndef ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSDIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSDIAGNOSTICS_H

#include "ARS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ARS_diagnostics_init(void);
void ARS_diagnostics_run(const ARS_State* state);
bool ARS_diagnostics_has_fault(void);
void ARS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSDIAGNOSTICS_H */
