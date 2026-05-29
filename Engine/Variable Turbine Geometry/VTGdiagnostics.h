#ifndef ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGDIAGNOSTICS_H
#define ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGDIAGNOSTICS_H

#include "VTG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VTG_diagnostics_init(void);
void VTG_diagnostics_run(const VTG_State* state);
bool VTG_diagnostics_has_fault(void);
void VTG_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGDIAGNOSTICS_H */
