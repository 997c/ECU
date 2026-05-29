#ifndef ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSDIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSDIAGNOSTICS_H

#include "AUS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AUS_diagnostics_init(void);
void AUS_diagnostics_run(const AUS_State* state);
bool AUS_diagnostics_has_fault(void);
void AUS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSDIAGNOSTICS_H */
