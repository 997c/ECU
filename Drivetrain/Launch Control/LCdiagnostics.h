#ifndef ECU_DRIVETRAIN_LAUNCH_CONTROL_LCDIAGNOSTICS_H
#define ECU_DRIVETRAIN_LAUNCH_CONTROL_LCDIAGNOSTICS_H

#include "LC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void LC_diagnostics_init(void);
void LC_diagnostics_run(const LC_State* state);
bool LC_diagnostics_has_fault(void);
void LC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_LAUNCH_CONTROL_LCDIAGNOSTICS_H */
