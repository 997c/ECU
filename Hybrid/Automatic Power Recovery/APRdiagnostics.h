#ifndef ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRDIAGNOSTICS_H
#define ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRDIAGNOSTICS_H

#include "APR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void APR_diagnostics_init(void);
void APR_diagnostics_run(const APR_State* state);
bool APR_diagnostics_has_fault(void);
void APR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRDIAGNOSTICS_H */
