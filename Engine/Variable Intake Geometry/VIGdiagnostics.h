#ifndef ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGDIAGNOSTICS_H
#define ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGDIAGNOSTICS_H

#include "VIG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VIG_diagnostics_init(void);
void VIG_diagnostics_run(const VIG_State* state);
bool VIG_diagnostics_has_fault(void);
void VIG_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGDIAGNOSTICS_H */
