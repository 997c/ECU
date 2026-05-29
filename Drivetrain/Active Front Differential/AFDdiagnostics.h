#ifndef ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDDIAGNOSTICS_H
#define ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDDIAGNOSTICS_H

#include "AFD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AFD_diagnostics_init(void);
void AFD_diagnostics_run(const AFD_State* state);
bool AFD_diagnostics_has_fault(void);
void AFD_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDDIAGNOSTICS_H */
