#ifndef ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGDIAGNOSTICS_H

#include "DLG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DLG_diagnostics_init(void);
void DLG_diagnostics_run(const DLG_State* state);
bool DLG_diagnostics_has_fault(void);
void DLG_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGDIAGNOSTICS_H */
