#ifndef ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSDIAGNOSTICS_H
#define ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSDIAGNOSTICS_H

#include "ABS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ABS_diagnostics_init(void);
void ABS_diagnostics_run(const ABS_State* state);
bool ABS_diagnostics_has_fault(void);
void ABS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSDIAGNOSTICS_H */
