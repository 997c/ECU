#ifndef ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTDIAGNOSTICS_H

#include "ACT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ACT_diagnostics_init(void);
void ACT_diagnostics_run(const ACT_State* state);
bool ACT_diagnostics_has_fault(void);
void ACT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTDIAGNOSTICS_H */
