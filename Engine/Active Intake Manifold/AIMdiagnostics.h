#ifndef ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMDIAGNOSTICS_H
#define ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMDIAGNOSTICS_H

#include "AIM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AIM_diagnostics_init(void);
void AIM_diagnostics_run(const AIM_State* state);
bool AIM_diagnostics_has_fault(void);
void AIM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMDIAGNOSTICS_H */
