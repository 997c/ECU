#ifndef ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMDIAGNOSTICS_H
#define ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMDIAGNOSTICS_H

#include "DFM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DFM_diagnostics_init(void);
void DFM_diagnostics_run(const DFM_State* state);
bool DFM_diagnostics_has_fault(void);
void DFM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMDIAGNOSTICS_H */
