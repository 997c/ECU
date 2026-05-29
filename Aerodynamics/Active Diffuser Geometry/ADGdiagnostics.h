#ifndef ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGDIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGDIAGNOSTICS_H

#include "ADG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ADG_diagnostics_init(void);
void ADG_diagnostics_run(const ADG_State* state);
bool ADG_diagnostics_has_fault(void);
void ADG_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGDIAGNOSTICS_H */
