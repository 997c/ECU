#ifndef ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSDIAGNOSTICS_H

#include "APS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void APS_diagnostics_init(void);
void APS_diagnostics_run(const APS_State* state);
bool APS_diagnostics_has_fault(void);
void APS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSDIAGNOSTICS_H */
