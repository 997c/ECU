#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSDIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSDIAGNOSTICS_H

#include "AFS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AFS_diagnostics_init(void);
void AFS_diagnostics_run(const AFS_State* state);
bool AFS_diagnostics_has_fault(void);
void AFS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSDIAGNOSTICS_H */
