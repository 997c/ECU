#ifndef ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSDIAGNOSTICS_H
#define ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSDIAGNOSTICS_H

#include "OGS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void OGS_diagnostics_init(void);
void OGS_diagnostics_run(const OGS_State* state);
bool OGS_diagnostics_has_fault(void);
void OGS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSDIAGNOSTICS_H */
