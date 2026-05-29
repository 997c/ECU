#ifndef ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCDIAGNOSTICS_H

#include "ARC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ARC_diagnostics_init(void);
void ARC_diagnostics_run(const ARC_State* state);
bool ARC_diagnostics_has_fault(void);
void ARC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCDIAGNOSTICS_H */
