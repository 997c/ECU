#ifndef ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCDIAGNOSTICS_H
#define ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCDIAGNOSTICS_H

#include "DYC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DYC_diagnostics_init(void);
void DYC_diagnostics_run(const DYC_State* state);
bool DYC_diagnostics_has_fault(void);
void DYC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCDIAGNOSTICS_H */
