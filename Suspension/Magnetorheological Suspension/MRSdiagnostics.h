#ifndef ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSDIAGNOSTICS_H
#define ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSDIAGNOSTICS_H

#include "MRS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void MRS_diagnostics_init(void);
void MRS_diagnostics_run(const MRS_State* state);
bool MRS_diagnostics_has_fault(void);
void MRS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSDIAGNOSTICS_H */
