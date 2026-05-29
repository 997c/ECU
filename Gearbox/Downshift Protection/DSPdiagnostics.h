#ifndef ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPDIAGNOSTICS_H
#define ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPDIAGNOSTICS_H

#include "DSP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DSP_diagnostics_init(void);
void DSP_diagnostics_run(const DSP_State* state);
bool DSP_diagnostics_has_fault(void);
void DSP_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPDIAGNOSTICS_H */
