#ifndef ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLDIAGNOSTICS_H
#define ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLDIAGNOSTICS_H

#include "EDL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EDL_diagnostics_init(void);
void EDL_diagnostics_run(const EDL_State* state);
bool EDL_diagnostics_has_fault(void);
void EDL_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLDIAGNOSTICS_H */
