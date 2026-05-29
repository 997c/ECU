#ifndef ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBADIAGNOSTICS_H
#define ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBADIAGNOSTICS_H

#include "EBA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EBA_diagnostics_init(void);
void EBA_diagnostics_run(const EBA_State* state);
bool EBA_diagnostics_has_fault(void);
void EBA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBADIAGNOSTICS_H */
