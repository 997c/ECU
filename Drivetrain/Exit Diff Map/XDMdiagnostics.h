#ifndef ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMDIAGNOSTICS_H
#define ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMDIAGNOSTICS_H

#include "XDM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void XDM_diagnostics_init(void);
void XDM_diagnostics_run(const XDM_State* state);
bool XDM_diagnostics_has_fault(void);
void XDM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMDIAGNOSTICS_H */
