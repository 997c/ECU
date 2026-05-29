#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2DIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2DIAGNOSTICS_H

#include "AFS2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AFS2_diagnostics_init(void);
void AFS2_diagnostics_run(const AFS2_State* state);
bool AFS2_diagnostics_has_fault(void);
void AFS2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2DIAGNOSTICS_H */
