#ifndef ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMDIAGNOSTICS_H
#define ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMDIAGNOSTICS_H

#include "MDM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void MDM_diagnostics_init(void);
void MDM_diagnostics_run(const MDM_State* state);
bool MDM_diagnostics_has_fault(void);
void MDM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMDIAGNOSTICS_H */
