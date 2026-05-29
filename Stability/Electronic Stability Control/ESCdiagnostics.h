#ifndef ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCDIAGNOSTICS_H
#define ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCDIAGNOSTICS_H

#include "ESC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ESC_diagnostics_init(void);
void ESC_diagnostics_run(const ESC_State* state);
bool ESC_diagnostics_has_fault(void);
void ESC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCDIAGNOSTICS_H */
