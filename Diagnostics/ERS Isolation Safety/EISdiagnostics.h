#ifndef ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISDIAGNOSTICS_H

#include "EIS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EIS_diagnostics_init(void);
void EIS_diagnostics_run(const EIS_State* state);
bool EIS_diagnostics_has_fault(void);
void EIS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISDIAGNOSTICS_H */
