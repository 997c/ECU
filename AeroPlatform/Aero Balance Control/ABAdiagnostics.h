#ifndef ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABADIAGNOSTICS_H
#define ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABADIAGNOSTICS_H

#include "ABA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ABA_diagnostics_init(void);
void ABA_diagnostics_run(const ABA_State* state);
bool ABA_diagnostics_has_fault(void);
void ABA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABADIAGNOSTICS_H */
