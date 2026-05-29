#ifndef ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCDIAGNOSTICS_H
#define ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCDIAGNOSTICS_H

#include "SCC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SCC_diagnostics_init(void);
void SCC_diagnostics_run(const SCC_State* state);
bool SCC_diagnostics_has_fault(void);
void SCC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCDIAGNOSTICS_H */
