#ifndef ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMDIAGNOSTICS_H
#define ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMDIAGNOSTICS_H

#include "TPM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TPM_diagnostics_init(void);
void TPM_diagnostics_run(const TPM_State* state);
bool TPM_diagnostics_has_fault(void);
void TPM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMDIAGNOSTICS_H */
