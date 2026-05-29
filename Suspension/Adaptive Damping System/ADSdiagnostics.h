#ifndef ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSDIAGNOSTICS_H
#define ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSDIAGNOSTICS_H

#include "ADS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ADS_diagnostics_init(void);
void ADS_diagnostics_run(const ADS_State* state);
bool ADS_diagnostics_has_fault(void);
void ADS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSDIAGNOSTICS_H */
