#ifndef ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMDIAGNOSTICS_H
#define ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMDIAGNOSTICS_H

#include "EDM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EDM_diagnostics_init(void);
void EDM_diagnostics_run(const EDM_State* state);
bool EDM_diagnostics_has_fault(void);
void EDM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMDIAGNOSTICS_H */
