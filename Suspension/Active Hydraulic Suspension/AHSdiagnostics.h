#ifndef ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSDIAGNOSTICS_H

#include "AHS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AHS_diagnostics_init(void);
void AHS_diagnostics_run(const AHS_State* state);
bool AHS_diagnostics_has_fault(void);
void AHS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSDIAGNOSTICS_H */
