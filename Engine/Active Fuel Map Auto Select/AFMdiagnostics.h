#ifndef ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMDIAGNOSTICS_H
#define ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMDIAGNOSTICS_H

#include "AFM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AFM_diagnostics_init(void);
void AFM_diagnostics_run(const AFM_State* state);
bool AFM_diagnostics_has_fault(void);
void AFM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMDIAGNOSTICS_H */
