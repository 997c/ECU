#ifndef ECU_DIAGNOSTICS_FAULT_DETECTION_FDTDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_FAULT_DETECTION_FDTDIAGNOSTICS_H

#include "FDT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void FDT_diagnostics_init(void);
void FDT_diagnostics_run(const FDT_State* state);
bool FDT_diagnostics_has_fault(void);
void FDT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_FAULT_DETECTION_FDTDIAGNOSTICS_H */
