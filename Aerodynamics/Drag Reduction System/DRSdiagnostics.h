#ifndef ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSDIAGNOSTICS_H
#define ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSDIAGNOSTICS_H

#include "DRS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DRS_diagnostics_init(void);
void DRS_diagnostics_run(const DRS_State* state);
bool DRS_diagnostics_has_fault(void);
void DRS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSDIAGNOSTICS_H */
