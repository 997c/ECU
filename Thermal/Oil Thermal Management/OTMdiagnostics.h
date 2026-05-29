#ifndef ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMDIAGNOSTICS_H
#define ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMDIAGNOSTICS_H

#include "OTM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void OTM_diagnostics_init(void);
void OTM_diagnostics_run(const OTM_State* state);
bool OTM_diagnostics_has_fault(void);
void OTM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMDIAGNOSTICS_H */
