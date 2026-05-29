#ifndef ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4DIAGNOSTICS_H
#define ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4DIAGNOSTICS_H

#include "ADS4.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ADS4_diagnostics_init(void);
void ADS4_diagnostics_run(const ADS4_State* state);
bool ADS4_diagnostics_has_fault(void);
void ADS4_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4DIAGNOSTICS_H */
