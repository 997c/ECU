#ifndef ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCDIAGNOSTICS_H

#include "ATC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ATC_diagnostics_init(void);
void ATC_diagnostics_run(const ATC_State* state);
bool ATC_diagnostics_has_fault(void);
void ATC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCDIAGNOSTICS_H */
