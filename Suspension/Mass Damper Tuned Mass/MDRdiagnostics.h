#ifndef ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRDIAGNOSTICS_H
#define ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRDIAGNOSTICS_H

#include "MDR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void MDR_diagnostics_init(void);
void MDR_diagnostics_run(const MDR_State* state);
bool MDR_diagnostics_has_fault(void);
void MDR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRDIAGNOSTICS_H */
