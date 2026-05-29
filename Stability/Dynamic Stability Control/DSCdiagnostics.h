#ifndef ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCDIAGNOSTICS_H
#define ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCDIAGNOSTICS_H

#include "DSC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DSC_diagnostics_init(void);
void DSC_diagnostics_run(const DSC_State* state);
bool DSC_diagnostics_has_fault(void);
void DSC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCDIAGNOSTICS_H */
