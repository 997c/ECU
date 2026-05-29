#ifndef ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDDIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDDIAGNOSTICS_H

#include "ABD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ABD_diagnostics_init(void);
void ABD_diagnostics_run(const ABD_State* state);
bool ABD_diagnostics_has_fault(void);
void ABD_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDDIAGNOSTICS_H */
