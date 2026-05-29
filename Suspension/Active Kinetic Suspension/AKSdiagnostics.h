#ifndef ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSDIAGNOSTICS_H

#include "AKS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AKS_diagnostics_init(void);
void AKS_diagnostics_run(const AKS_State* state);
bool AKS_diagnostics_has_fault(void);
void AKS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSDIAGNOSTICS_H */
