#ifndef ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALADIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALADIAGNOSTICS_H

#include "ALA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ALA_diagnostics_init(void);
void ALA_diagnostics_run(const ALA_State* state);
bool ALA_diagnostics_has_fault(void);
void ALA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERO_LAMBORGHINI_STYLE_ALADIAGNOSTICS_H */
