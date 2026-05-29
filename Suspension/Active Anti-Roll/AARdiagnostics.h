#ifndef ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARDIAGNOSTICS_H

#include "AAR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AAR_diagnostics_init(void);
void AAR_diagnostics_run(const AAR_State* state);
bool AAR_diagnostics_has_fault(void);
void AAR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARDIAGNOSTICS_H */
