#ifndef ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3DIAGNOSTICS_H
#define ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3DIAGNOSTICS_H

#include "ABS3.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ABS3_diagnostics_init(void);
void ABS3_diagnostics_run(const ABS3_State* state);
bool ABS3_diagnostics_has_fault(void);
void ABS3_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3DIAGNOSTICS_H */
