#ifndef ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCDIAGNOSTICS_H
#define ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCDIAGNOSTICS_H

#include "USC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void USC_diagnostics_init(void);
void USC_diagnostics_run(const USC_State* state);
bool USC_diagnostics_has_fault(void);
void USC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCDIAGNOSTICS_H */
