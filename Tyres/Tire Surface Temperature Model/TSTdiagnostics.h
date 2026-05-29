#ifndef ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTDIAGNOSTICS_H
#define ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTDIAGNOSTICS_H

#include "TST.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TST_diagnostics_init(void);
void TST_diagnostics_run(const TST_State* state);
bool TST_diagnostics_has_fault(void);
void TST_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTDIAGNOSTICS_H */
