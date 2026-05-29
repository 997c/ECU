#ifndef ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2DIAGNOSTICS_H
#define ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2DIAGNOSTICS_H

#include "APC2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void APC2_diagnostics_init(void);
void APC2_diagnostics_run(const APC2_State* state);
bool APC2_diagnostics_has_fault(void);
void APC2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2DIAGNOSTICS_H */
