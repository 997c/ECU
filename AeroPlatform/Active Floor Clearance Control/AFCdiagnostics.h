#ifndef ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCDIAGNOSTICS_H
#define ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCDIAGNOSTICS_H

#include "AFC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AFC_diagnostics_init(void);
void AFC_diagnostics_run(const AFC_State* state);
bool AFC_diagnostics_has_fault(void);
void AFC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCDIAGNOSTICS_H */
