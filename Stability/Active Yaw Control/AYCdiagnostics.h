#ifndef ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCDIAGNOSTICS_H
#define ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCDIAGNOSTICS_H

#include "AYC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AYC_diagnostics_init(void);
void AYC_diagnostics_run(const AYC_State* state);
bool AYC_diagnostics_has_fault(void);
void AYC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCDIAGNOSTICS_H */
