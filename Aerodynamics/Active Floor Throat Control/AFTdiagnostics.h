#ifndef ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTDIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTDIAGNOSTICS_H

#include "AFT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AFT_diagnostics_init(void);
void AFT_diagnostics_run(const AFT_State* state);
bool AFT_diagnostics_has_fault(void);
void AFT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTDIAGNOSTICS_H */
