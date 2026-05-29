#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSDIAGNOSTICS_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSDIAGNOSTICS_H

#include "AGS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AGS_diagnostics_init(void);
void AGS_diagnostics_run(const AGS_State* state);
bool AGS_diagnostics_has_fault(void);
void AGS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSDIAGNOSTICS_H */
